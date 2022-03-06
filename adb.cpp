#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int divide(int a, int b)
    {
        int res = 0;
        if (a < 0)
            a = -a;
        if (b < 0)
            b = -b;
        int a1 = a, b1 = b;
        while (a1 > 0)
        {
            res++;
            a1 = a1 - b1;
        }
        if ((a < 0 && b < 0) || (a >= 0 && b >= 0))
            return res - 1;
        if (a < 0 || b < 0)
            return -(res - 1);
        return -1;
    }
};
Solution obj;

int main()
{
    //Driver code
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        cout << obj.divide(a, b) << endl;
    }

    return 0;
}