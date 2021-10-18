#include <iostream>
using namespace std;
class solution
{
    int count = 0;

public:
    int gcd(int a, int b)
    {
        int count = 0;
        while (a != 0 && b != 0)
        {
            count++;
            if (a > b)
            {
                a = a - b;
            }
            else if (b > a)
            {
                b = b - a;
            }
            else
            {
                cout << "Count: " << count << endl;
                return a;
            }
        }
        cout << "Count: " << count << endl;
        return max(a, b);
    }
    int fast_gcd(int a, int b)
    {
        count++;
        // if (b == 0)
        //     return a;
        // return fast_gcd(b, a % b);
        while (b != 0)
        {
            int tmp = a;
            a = b;
            b = tmp % b;
        }
        cout << "Count: " << count << endl;
        return a;
    }
};

int main()
{
    solution obj;
    cout << obj.gcd(4802, 4802) << endl;
    cout << obj.fast_gcd(4802, 4802) << endl;
    return 0;
}