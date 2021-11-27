#include <bits/stdc++.h>
using namespace std;
class solution1
{
    int maxIndex(int a[], int low, int high)
    {
        int res = low;
        for (size_t i = low; i <= high; i++)
        {
            if (a[res] < a[i])
            {
                res = i;
            }
        }
        return res;
    }

public:
    int trapping_rain_water(int a[], int n)
    {
        int left_max_index = 0, right_max_index = maxIndex(a, 0, n - 1);
        int left_max = a[left_max_index];
        int right_max = a[right_max_index];
        int ans = 0;
        for (size_t i = 1; i < n - 1; i++)
        {
            if (i > right_max_index)
            {
                right_max_index = maxIndex(a, i, n - 1);
                right_max = a[right_max_index];
            }

            if (a[i] > left_max)
            {
                left_max = a[i];
                left_max_index = i;
            }

            ans += min(left_max, right_max) - a[i];
        }
        return ans;
    }
};

class solution2
{
public:
    int trapping_rain_water(int arr[], int n)
    {
        //write your code here
        int left_max[n];
        int right_max[n];
        //filling the left_max array
        int maximum = arr[0];
        for (int i = 0; i < n; i++)
        {
            left_max[i] = max(maximum, arr[i]);
            maximum = max(arr[i], maximum);
        }
        int maximum2 = arr[n - 1];
        for (int i = n - 1; i >= 0; i--)
        {
            right_max[i] = max(maximum2, arr[i]);
            maximum2 = max(arr[i], maximum2);
        }
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            ans += min(left_max[i], right_max[i]) - arr[i]; //to avoid the negative answer include current element in left_max and right_max both.
        }
        return ans;
    }
};
solution1 obj1;
solution2 obj2;

int main()
{
    //Driver code
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << obj1.trapping_rain_water(arr, n) << endl;
    cout << obj2.trapping_rain_water(arr, n) << endl;
    return 0;
}