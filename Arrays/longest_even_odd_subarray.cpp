#include <bits/stdc++.h>
using namespace std;
class solution
{
public:
    /*
    Problem : You are given an array You have to find the longest subarray
    which have alternating even odd element and no. of evn elements = no. of
    odd elements
    */
    int longest_even_odd_subarray(int arr[], int n)
    {
        // // neive approach: O(n^2)
        // int maximum = 1;
        // for (int i = 0; i < n; i++)
        // {
        //     int count = 1;
        //     for (int j = i + 1; j < n; j++)
        //     {
        //         if ((arr[j] % 2 == 0 && arr[j - 1] % 2 == 1) || (arr[j] % 2 == 1 && arr[j - 1] % 2 == 0))
        //         {
        //             count++;
        //         }
        //         else
        //         {
        //             break;
        //         }
        //     }
        //     maximum = max(maximum, count);
        // }
        // return maximum;

        // efficient approach: O(n)
        int res = 1, cur = 1;
        for (size_t j = 1; j < n; j++)
        {
            if ((arr[j] % 2 == 0 && arr[j - 1] % 2 == 1) || (arr[j] % 2 == 1 && arr[j - 1] % 2 == 0))
            {
                cur++;
                res = max(res, cur);
            }
            else
            {
                cur = 1;
            }
        }
        return res;
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
    cout << obj.longest_even_odd_subarray(arr, n);
    return 0;
}