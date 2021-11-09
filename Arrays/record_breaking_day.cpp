#include <bits/stdc++.h>
using namespace std;
class solution
{
public:
    /*
problem: you are given an integer array where a[i] represents the number of sold items on ith day. you have to 
         print all record breaking days.
        :::A DAY CAN BE CALLED A RECORD BREAKING DAY IFF ALL THE PREVIOUS ELEMENTS AND THE FOLLOWING ELEMENT IS STRICTLY LARGER THEN CURRENT DAY:::
*/
    void record_breaking_day(int arr[], int n)
    {
        //write your code here
        int mx = INT_MIN;

        for (int i = 0; i < n; i++)
        {
            if (arr[i] > arr[i + 1] && arr[i] > mx)
            {
                cout << arr[i] << " ";
            }
            mx = max(mx, arr[i]);
        }
    }
};
solution obj;

int main()
{
    //Driver code
    int arr[5] = {2, 1, 6, 2, 3};
    int n = 5;
    obj.record_breaking_day(arr, n);
    return 0;
}