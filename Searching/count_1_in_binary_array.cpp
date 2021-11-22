#include <bits/stdc++.h>
using namespace std;
class solution
{
public:
    int count_1s(int a[], int n)
    {
        //write your code here
        int low = 0, high = n - 1;
        while (low <= high)
        {
            int mid = (low + high) / 2;
            if (a[mid] == 0)
            {
                low = mid + 1;
            }
            else
            {
                if (a[mid - 1] == 0 || mid == 0)
                {
                    return n - mid;
                }
                high = mid - 1;
            }
        }
        return 0;
    }
};
solution obj;
// 001111

int main()
{
    //Driver code
    int n, key;
    cin >> n;
    int arr[n];
    for (size_t i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << obj.count_1s(arr, n);
    return 0;
}