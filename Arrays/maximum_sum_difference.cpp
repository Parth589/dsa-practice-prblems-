#include <bits/stdc++.h>
using namespace std;
class solution
{
public:
    /*
    Find the maximum value of arr[j]-arr[i] such that j>i
*/
    int Maximum_Sum_Difference(int arr[], int n)
    {
        //write your code here
        //inefficient approach ->O(n^2)

        // int current_max_sum = 0;
        // for (int j = 1; j < n; j++)
        // {
        //     for (int i = 0; i < j; i++)
        //     {
        //         if ((arr[j] - arr[i]) > current_max_sum)
        //         {
        //             current_max_sum = arr[j] - arr[i];
        //             cout << "I=" << i << "J= " << j << endl;
        //         }
        //     }
        // }

        // return current_max_sum;
        int max_index = find_max(arr, 1, n - 1);
        int min_index = find_min(arr, 0, max_index - 1);
        return arr[max_index] - arr[min_index];
    }
    int find_min(int arr[], int start, int end)
    {
        int res = start;
        for (int i = start + 1; i < end + 1; i++)
        {
            if (arr[i] < arr[res])
            {
                res = i;
            }
        }
        return res;
    }
    int find_max(int arr[], int start, int end)
    {
        int res = start;
        for (int i = start + 1; i < end + 1; i++)
        {
            if (arr[i] >= arr[res])
            {
                res = i;
            }
        }
        return res;
    }
};
solution obj;

int main()
{
    int arr[] = {9, 5, 6, 3, 2};
    int n = 5;
    cout << obj.Maximum_Sum_Difference(arr, n);
    return 0;
}