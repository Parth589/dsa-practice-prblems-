#include <iostream>
using namespace std;
class solution
{
public:
    int fast_power(int a, int b)
    {
        if (b == 0)
        {
            return 1;
        }
        if (b & 1 == 0)
        {
            int ans = fast_power(a, b / 2);
            return ans * ans;
        }
        else
        {
            int ans = fast_power(a, b - 1);
            return a * ans;
        }
    }
};

int main()
{
    solution obj;
    cout << obj.fast_power(3, 4);
    return 0;
}