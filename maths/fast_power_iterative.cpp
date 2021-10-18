#include <iostream>
using namespace std;
class solution
{
public:
    int fast_power(int a, int n) // time complexity => O(log n); space complexity=> O(1);
    {
        int res = 1;
        //if n =5 ,a=3;
        //5 => [ 0 1 0 1]; corresponds to [0*(5^4) , 1*(5^3) , 0*(5^2) , 1*(5^1)]
        while (n)
        {
            if (n & 1 != 0) //if the bit is 1 then take it else ignore it
            {
                // n is even
                res = res * a;
            }

            n = n >> 1;
            a = a * a;
        }
        return res;
    }
};
int main()
{
    solution obj;
    cout << obj.fast_power(5, 6);
    return 0;
}