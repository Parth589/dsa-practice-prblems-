#include <iostream>
#include <string>
using namespace std;
class solution
{
public:
    void binary_representation(int n)
    {
        //handling the whole number
        if (n == 0)
        {
            return;
        }
        binary_representation(n >> 1);
        //handling the current bit
        if ((n & 1) == 0)
        {
            cout << "0";
            return;
        }
        else
        {
            cout << "1";
            return;
        }
    }

    void binary_representation_iterative(int n)
    {
        string tmp;
        while (n)
        {
            if ((n & 1) == 0)
            {
                tmp = tmp + "0";
            }
            else
            {
                tmp = tmp + "1";
            }
            n = n >> 1;
        }
        for (int i = tmp.size() - 1; i >= 0; i--)
        {
            cout << tmp[i];
        }
    }
};
int main()
{
    solution obj;
    obj.binary_representation(2);
    cout << endl;
    obj.binary_representation_iterative(2);
    return 0;
}
