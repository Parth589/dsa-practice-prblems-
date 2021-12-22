#include <iostream>
#include <set>
using namespace std;
pair<int, int> func(pair<int, int> n)
{
    int x = n.first, y = n.second;

    if ((x % 2 == 0) && (y % 2 == 0))
    {
        pair<int, int> r;
        r.first = x / 2;
        r.second = y / 2;
        return r;
    }
    return {-1, -1};
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        pair<int, int> n;
        int x, y;
        cin >> x >> y;
        // cin >> (n.first) >> (n.second);
        n.first = x;
        n.second = y;
        pair<int, int> res = func(n);
        cout << res.first << " " << res.second << endl;
    }
    return 0;
}