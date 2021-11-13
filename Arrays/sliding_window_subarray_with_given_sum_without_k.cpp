#include <bits/stdc++.h>
using namespace std;
class solution
{
public:
    /*
    Problem: given an array and a sum .You have to find that wether there exist a subarray of array arr which has sum as given sum.
*/
    bool subarray_with_given_sum(int arr[], int n, int given_sum)
    {
        //write your code here
        int start, end;
        start = end = 0;
        int current_sum = arr[0];
        while (end < n)
        {
            if (current_sum == given_sum)
            {
                cout << "Start: " << start << "End: " << end << endl;
                return true;
            }
            else if (current_sum < given_sum)
            {
                current_sum = current_sum + arr[++end];
            }
            else
            {
                current_sum = current_sum - arr[start++];
            }
        }
        return false;
    }
};
solution obj;

int main()
{
    //Driver code
    int n, sum;

    cin >> n >> sum;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    if (obj.subarray_with_given_sum(arr, n, sum))
        cout << "Y";

    else
        cout << "N";
    return 0;
}