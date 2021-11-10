#include <bits/stdc++.h>
using namespace std;
class solution
{
public:
    // Time Complexity :O(n);
    int stock_buy_and_sell(int arr[], int n)
    {
        //write your code here
        int profit = 0;
        int start = 0;
        int end = -1; //for the first time end should be 0 so that here end initialized as -1.
        while (start < n)
        {
            //setup the start index
            start = end + 1; //another stock will be bought after an existing stock is sold
            while (arr[start] > arr[start + 1] && start < n)
            {
                start++;
            }
            end = start; // end index can be placed at the start index as it makes the profit 0
            //setup the end index
            while (arr[end] < arr[end + 1] && end + 1 < n)
            {
                end++;
            }
            //
            if (start >= n || end >= n)
            {
                break;
            }

            profit += arr[end] - arr[start];
        }
        return profit;
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

    cout << "The profit is: " << obj.stock_buy_and_sell(arr, n);
    return 0;
}