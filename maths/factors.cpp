#include <iostream>
using namespace std;
class solution
{
public:
    void multiples(int n)
    {
        int i;
        for (i = 2; i * i < n; i++)
        {
            if (n % i == 0)
            {
                cout << i << " ";
            }
        }
        for (; i * i >= 2; i--)
        {
            if (n % i == 0)
            {
                cout << (n / i) << " ";
            }
        }
    }
};

int main()
{
    solution obj;
    obj.multiples(2520);
    return 0;
}