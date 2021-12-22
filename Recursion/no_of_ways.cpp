#include <bits/stdc++.h>
using namespace std;
class solution
{
public:
    int ways(int n, int m)
    {
        //write your code here
        if (n == 1 || m == 1)
            return 1;
        return ways(n - 1, m) + ways(n, m - 1) + 2;
    }
};
solution obj;

int main()
{
    //Driver code
    int t;
    cin >> t;
    int n, m;
    while (t--)
    {
        cin >> n >> m;
        cout << obj.ways(n, m);
    }

    return 0;
}