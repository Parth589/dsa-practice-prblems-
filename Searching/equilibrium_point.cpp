#include <bits/stdc++.h>
using namespace std;
class solution
{
public:
    int equilibrium_point(vector<int> a)
    {
        int n = a.size();
        vector<int> lsum(n);
        lsum[0] = a[0];
        for (int i = 1; i < n; i++)
        {
            lsum[i] = lsum[i - 1] + a[i];
        }
        vector<int> rsum(n);
        rsum[n - 1] = a[n - 1];
        for (int i = n - 2; i >= 0; i--)
        {
            rsum[i] = rsum[i + 1] + a[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (lsum[i] == rsum[i])
            {
                return i;
            }
        }
        return -1;
    }
};
solution obj;

int main()
{
    //Driver code

    vector<int> arr = {1, 7, 3, 6, 3,2, 4,2};
    cout<<obj.equilibrium_point(arr)<<endl;
    return 0;
}