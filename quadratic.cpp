#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
vector<int> quadraticRoots(int a, int b, int c)
{
    vector<int> res;
    long idk = (b * b) - (4 * a * c);
    if (idk < 0)
    {
        res.push_back(-1);
        return res;
    }
    int r1 = ((0 - b) + (sqrt(idk))) / (2 * a);
    int r2 = ((0 - b) - (sqrt(idk))) / (2 * a);
    cout << sqrt(idk) << "utg" << endl;
    res.push_back(r1);
    res.push_back(r2);
    return res;
}
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    vector<int> res = quadraticRoots(a, b, c);
    for (auto i = res.begin(); i < res.end(); i++)
    {
        cout << *i << "\t";
    }

    return 0;
}