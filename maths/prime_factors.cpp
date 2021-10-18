#include <iostream>
using namespace std;
class solution
{
    // private:
public:
    bool is_prime(int n)
    {
        if (n <= 1)
        {
            return false;
        }
        for (int i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                return false;
            }
        }
        return true;
    }

    friend void prime_factors_recursive(int, int);
    void prime_factors(int n)
    {
        if (n <= 1)
        {
            return;
        }

        //lvl 1  -> O(n * n * log n)
        // for (int i = 2; i < n; i++)
        // {
        //     if (is_prime(i))
        //     {
        //         while (n % i == 00 && n != 0)
        //         {
        //             cout << i << " ";
        //             n /= i;
        //         }
        //     }
        // }
        // if (n > 1)
        // {
        //     cout << n << " ";
        // }
        // //lvl 2  -> O(sqrt(n) * n * log n)
        // for (int i = 2; i * i < n; i++)
        // {
        //     if (is_prime(i))
        //     {
        //         while (n % i == 00 && n != 0)
        //         {
        //             cout << i << " ";
        //             n /= i;
        //         }
        //     }
        // }
        // if (n > 1)
        // {
        //     cout << n << " ";
        // }

        //lvl 3  -> O(sqrt(n) * n * log n)
        int count_w_loop = 0;
        int count_wo_loop = 0;
        while (n % 2 == 0 && n != 0)
        {
            count_w_loop++;
            count_wo_loop++;
            cout << 2 << " ";
            n /= 2;
        }
        while (n % 3 == 0 && n != 0)
        {
            count_w_loop++;
            count_wo_loop++;
            cout << 3 << " ";
            n /= 3;
        }

        for (int i = 5; i * i < n; i = i + 6)
        {
            count_wo_loop++;
            while (n % i == 0 && n != 0)
            {
                count_w_loop++;
                cout << i << " ";
                n /= i;
            }
            while (n % (i + 2) == 0 && n != 0)
            {
                count_w_loop++;
                cout << (i + 2) << " ";
                n /= (i + 2);
            }
        }
        if (n > 1) //if the n will become a prime number or n is already a prime number, then it will not divisible by any number in that case print n
        {
            cout << n << " ";
        }
        // cout << endl
        //      << "count: " << count_w_loop;
        cout << endl
             << "count: " << count_wo_loop;
    }
};
solution global;
int count_global = 0;
void prime_factors_recursive(int n, int i = 5)
{
    //  lvl 4 : recursive method (not so optimised)
    if (global.is_prime(n))
    {
        cout << n << " ";
        return;
    }
    while (n % 2 == 0 && n != 0)
    {
        count_global++;
        cout << 2 << " ";
        n /= 2;
    }
    while (n % 3 == 0 && n != 0)
    {
        count_global++;
        cout << 3 << " ";
        n /= 3;
    }
    while (n % i == 0 && n != 0)
    {
        count_global++;
        cout << i << " ";
        n /= i;
    }
    while (n % (i + 2) == 0 && n != 0)
    {
        count_global++;
        cout << (i + 2) << " ";
        n /= i + 2;
    }
    prime_factors_recursive(n, i + 6);
}
int main()
{
    global.prime_factors(1245465);
    cout << endl
         << endl;
    prime_factors_recursive(1245465);
    cout << endl
         << "Count: " << count_global;
    return 0;
}