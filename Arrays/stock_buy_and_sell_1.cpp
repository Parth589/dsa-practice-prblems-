#include <bits/stdc++.h>
using namespace std;
class solution
{
public:
    int stock_buy_and_sell(int arr[], int n)
    {
        //write your code here
        // Method 1: to keep track of minimum element and assume that every ith element is for sell
        int min_so_far = arr[0];
        int max_profit = 0;

        for (int i = 1; i < n; i++)
        {
            max_profit = max(max_profit, arr[i] - min_so_far);

            min_so_far = min(min_so_far, arr[i]);
        }
        return max_profit;
    }
};
solution obj;

int main()
{
    //Driver code
    int arr[5] = {7, 6, 5, 8, 9};
    int n = 5;
    cout << obj.stock_buy_and_sell(arr, n);
    return 0;
}