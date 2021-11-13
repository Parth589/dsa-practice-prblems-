#include <bits/stdc++.h>
using namespace std;
class solution
{
public:
    int equilibrium_point(int arr[], int n) //-> time :O(n) ; space :O(n)
    {
        //write your code here
        int prefix_sum[n + 1];
        prefix_sum[0] = 0;
        prefix_sum[1] = arr[0];
        for (size_t i = 2; i <= n; i++)
        {
            prefix_sum[i] = prefix_sum[i - 1] + arr[i - 1];
        }
        for (size_t i = 1; i <= n; i++)
        {
            if (prefix_sum[n] - prefix_sum[i - 1] == prefix_sum[i])
            {
                return i - 1;
            }
        }
        return -1;
    }
    int optimized_equilibrium_point(int arr[], int n) //-> time :O(n) ; space :O(1)
    {
        //count the full sum
        int sum = 0;
        for (size_t i = 0; i < n; i++)
        {
            sum += arr[i];
        }
        int current_sum = 0;
        for (size_t i = 0; i < n; i++)
        {
            if (sum - current_sum == current_sum + arr[i])
            {
                return i;
            }
            current_sum += arr[i];
        }
        return -1;
    }
};
solution obj;

int main()
{
    //Driver code
    int n = 5;
    int arr[n] = {2, -2, 5, -5, 6};
    cout << obj.equilibrium_point(arr, n) << endl;
    cout << obj.optimized_equilibrium_point(arr, n);
    return 0;
}