#include <iostream>
#include <cmath>
using namespace std;
class solution
{
public:
    void power_set(string str)
    {
        int size = str.size();
        int range = pow(2, size);
        for (int i = 0; i < range; i++)
        {
            int n = i;
            int count = 0;
            while (n)
            {
                if ((n & 1) == 1)
                {
                    cout << str[count];
                }
                n = n >> 1;
                count++;
            }
            cout << endl;
        }
    }
};
solution obj;
int main()
{
    obj.power_set("abc");
    return 0;
}