#include <bits/stdc++.h>
using namespace std;
class solution
{
public:
    int maximum_sum_difference(int arr[], int n)
    {
        //write your code here
        int min_ = INT_MAX;    //minimum element found so far
        int max_sum = INT_MIN; //maximun_sum -> result

        for (int i = 0; i < n; i++)
        {
            max_sum = max(arr[i] - min_, max_sum);
            min_ = min(min_, arr[i]);
            cout << i << endl;
        }
        return max_sum;
    }
};
solution obj;

int main()
{
    //Driver code
    int arr[5] = {10, 6, 5, 2, 1};
    cout << obj.maximum_sum_difference(arr, 5);
    return 0;
}