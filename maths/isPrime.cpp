#include <iostream>
using namespace std;
class solution
{
public:
    bool is_prime(int n)
    {
        int count = 0;
        // cumpolsary code
        if (n <= 1)
        {
            return false;
        }

        //lvl 1
        // for (int i = 2; i < n; i++)
        // {
        //     count++;

        //     if (n % i == 0)
        //     {
        //         cout << "count: " << count << endl;
        //         return false;
        //     }
        // }
        // cout << "count: " << count << endl;
        // return true;

        // lvl 2
        // for (int i = 2; i * i < n; i++)
        // {
        //     count++;
        //     if (n % i == 0)
        //     {
        //         cout << "count: " << count << endl;
        //         return false;
        //     }
        // }
        // cout << "count: " << count << endl;
        // return true;

        // // lvl 3
        // //check for divisibility by 2 & 3 and save many iteration
        if (n == 2 || n == 3)
        {
            return true;
        }
        if (n % 2 == 0 || n % 3 == 0)
        {
            return false;
        }
        for (int i = 5; i * i < n; i = i + 6)
        {
            count++;
            if (n % i == 0 || n % i + 2 == 0)
            {
                cout << "count: " << count << endl;
                return false;
            }
        }
        cout << "count: " << count << endl;
        return true;
    }
};

int main()
{
    solution obj;
    cout << obj.is_prime(104729);
    return 0;
}