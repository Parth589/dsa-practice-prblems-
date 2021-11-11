#include <bits/stdc++.h>
using namespace std;
class solution
{
public:
    int trapping_rain_water(int arr[], int n) //->time: O(n) , space: O(n)
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
    int trapping_rain_water(int arr[], int n) //-> time : O(n) space : O(1)
    {
        int left_max = 0;
        int right_max = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] > arr[right_max])
            {
                right_max = i;
            }
        }

        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            // left_max = max(arr[left_max], arr[i]);
            if (arr[i] > arr[left_max])
            {
                left_max = i;
            }
            // if ()
            // {
            //     /* code */
            // }
            ans += min(arr[left_max], arr[right_max]) - arr[i];
        }
    }
};
solution obj;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << obj.trapping_rain_water(arr, n);
    return 0;
}