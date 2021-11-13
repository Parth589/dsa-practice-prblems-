#include <bits/stdc++.h>
using namespace std;
class solution
{
public:
    bool subarray_with_given_sum(int arr[], int n, int sum, int k)
    {
        //write your code here
        int s = 0;
        int start = 0;   //starting pos of window
        int end = k - 1; //ending pos of window
        for (int i = 0; i < k; i++)
        {
            s += arr[i];
        }
        if (sum == s)
        {
            cout << "start :" << start << " End : " << end << endl;
            return true;
        }
        for (int i = end + 1; i < n; i++) // i is a ending index
        {
            s = s + arr[i] - arr[start];
            end++;
            start++;
            if (s == sum)
            {
                cout << "start :" << start << " End : " << end << endl;
                return true;
            }
        }
        return false;
    }
};
solution obj;

int main()
{
    //Driver code
    int n;
    int k;
    int sum;
    cout << " N : ";
    cin >> n;
    cout << " K : ";
    cin >> k;
    cout << " Sum  : ";
    cin >> sum;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    if (obj.subarray_with_given_sum(arr, n, sum, k))
        cout << "Y";
    else
        cout << "N";
    return 0;
}