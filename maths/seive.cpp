#include <iostream>
#include <vector>
using namespace std;
class solution
{
public:
    void seive(int n)
    {
        if (n <= 1)
        {
            return;
        }
        vector<bool> is_prime(n + 1, true);
        for (int i = 2; i * i <= n; i++)
        {
            if (is_prime[i])
            {
                for (int j = i * i; j <= n; j = j + i)
                {
                    is_prime[j] = false;
                }
            }
        }
        for (int i = 2; i <= n; i++)
        {
            if (is_prime[i])
            {
                cout << i << " ";
            }
        }
    }
};

int main()
{
    solution obj;
    obj.seive(53);
    return 0;
}