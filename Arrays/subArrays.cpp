#include <bits/stdc++.h>
using namespace std;
class solution
{
public:
    void print_all_subarrays(int arr[], int n)
    {
        //write your code here
        for (int i = 0; i < n; i++)
        {

            for (int j = i; j < n; j++)
            {
                for (int k = i; k <= j; k++)
                {
                    cout << arr[k] << " ";
                }
                cout << endl;
            }
        }
    }
    int maximum_sum_from_all_subArrays(int arr[], int n) // ->O(n^3)
    {
        int ans = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            for (int j = i; j < n; j++)
            {
                int current_sum = 0;
                for (int k = i; k <= j; k++)
                {
                    current_sum += arr[k];
                }
                ans = max(ans, current_sum);
            }
        }
        return ans;
    }
    int maximum_sum_subArray(int arr[], int n)
    {
        /*
        Idea : fin maximum sum till the i-1 th index and the next choice is to extend the subarray with ith element or not
        */
        int current_max_sum = arr[0]; // for i=0 th element the maximum subarray sum will be ith element itself
        int ans = current_max_sum;
        for (int i = 1; i < n; i++)
        {
            current_max_sum = max(current_max_sum + arr[i], arr[i]); //choice to extend the subarray sum with ith element by "current_max_sum + arr[i]" or leave it// agar me ye element dalu to mera sum badhega ya ye ek element hi pure sum se bada hoga

            ans = max(ans, current_max_sum);
        }
        return ans;
    }
};
solution obj;

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

    // obj.print_all_subarrays(arr, n);
    // cout << "Ans: " << obj.maximum_sum_from_all_subArrays(arr, n) << endl;
    cout << "Ans: " << obj.maximum_sum_subArray(arr, n);
    return 0;
}