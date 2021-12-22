#include <bits/stdc++.h>
using namespace std;
class solution
{
public:
    int equilibrium_point(int arr[], int n)
    {
        int sum[n];
        sum[0] = arr[0];
        for (int i = 1; i < n; i++)
        {
            sum[i] = sum[i - 1] + arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == (sum[n - 1] - sum[i - 1]))
            {
                return i;
            }
        }
    }
};
solution obj;

int main()
{
    //Driver code
    return 0;
}