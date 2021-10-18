#include <iostream>
using namespace std;
class solution
{
public:
    bool power_of_2(int n)
    {
        //write your code here
        //method 1 : continuesly devide n by 2
        // while (n != 1)
        // {
        //     if ((n % 2) == 1)
        //     {
        //         return false;
        //     }

        //     n /= 2;
        // }
        // return true;

        //method 2: brian's algorithm
        if ((n & (n - 1)) == 0)
        {
            return true;
        }
        return false;
    }
};
solution obj;
int main()
{
    int t, a;
    cin >> t;
    while (t--)
    {
        cin >> a;
        cout << obj.power_of_2(a) << endl;
    }

    return 0;
}