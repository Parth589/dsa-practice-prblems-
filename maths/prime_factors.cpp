#include <iostream>
using namespace std;
class solution
{
private:
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

public:
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
        if (n > 1)
        {
            cout << n << " ";
        }
        cout << endl
             << "count: " << count_w_loop;
        cout << endl
             << "count: " << count_wo_loop;
    }
};

int main()
{
    solution obj;
    obj.prime_factors(1245465);
    return 0;
}