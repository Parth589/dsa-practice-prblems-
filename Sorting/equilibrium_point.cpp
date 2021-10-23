#include <bits/stdc++.h>
using namespace std;
class solution
{
public:
    int equilibriumPoint(long long a[], int n)
    {
        for (int i = 0; i < n; i++)
        {
            int lsum = 0, rsum = 0;
            for (int j = 0; j < i; j++)
            {
                lsum += a[j];
            }
            for (int k = i + 1; k < n; k++)
            {
                rsum += a[k];
            }
            if (lsum == rsum)
                return i;
        }
        return -1;
    }
};
solution obj;

int main()
{
    //Driver code
    long long n;
    cin >> n;
    long long a[n];
    for (long long i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << obj.equilibriumPoint(a, n);
    return 0;
}