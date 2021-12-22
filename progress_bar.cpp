#include <bits/stdc++.h>
using namespace std;

int main()
{
    //Driver code
    int n; //how many sqares
    int k; //size of each sqares
    int t; //how much to be filled
    cin >> n >> k >> t;
    t = (k * n * t) / 100;
    int tk = t / k;
    int count = 0;
    for (int i = 0; i < tk; i++)
    {
        count++;
        cout << k << " ";
    }
    count++;
    cout << t % k << " ";
    for (size_t i = 0; i < n - count; i++)
    {
        cout << 0 << " ";
    }

    return 0;
}