#include <iostream>
using namespace std;
class solution
{
public:
    int set_reset(int n, int k, bool set)
    {
        //write your code here
        if (set)
        {
            return (n | (1 << (k - 1)));
        }
        else
        {
            unsigned int tmp = 1;
            tmp = (~(tmp << (k - 1)));
            return (n & tmp);
        }
    }
};
solution obj;
int main()
{
    cout << obj.set_reset(5, 1, false) << endl;
    cout << obj.set_reset(5, 2, true) << endl;
    cout << obj.set_reset(5, 1, !false) << endl;
    cout << obj.set_reset(5, 2, !true) << endl;
    return 0;
}