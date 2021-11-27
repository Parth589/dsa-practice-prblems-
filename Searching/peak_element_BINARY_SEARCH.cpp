#include <bits/stdc++.h>
using namespace std;
/*
    An element a[i] is said to be peak element iff a[i-1]<=a[i]>=a[i+1]
*/
class solution1
{
public:
    int peak_element(int arr[], int n) //-> time:O(n) ;space:O(1)
    {
        if (n == 1 || arr[0] >= arr[1])
            return 0;
        if (arr[n - 1] >= arr[n - 2])
            return (n - 1);
        for (int i = 1; i < n - 1; i++)
            if (arr[i] >= arr[i - 1] && arr[i] >= arr[i + 1])
                return i;
        return -1;
    }
};

class solution2
{
public:
    int peak_element(int arr[], int n)
    {
        //write your code here
        int low = 0, high = n - 1;
        while (low <= high)
        {
            int mid = (low + high) / 2;
            //check if arr[mid] is a peak element
            if (mid == 0 || mid == n - 1 || (arr[mid] >= arr[mid - 1] && arr[mid] >= arr[mid + 1]))
                return mid;
            //check if left half has a peak element
            if (arr[mid - 1] > arr[mid])
                high = mid - 1;
            else
                low = mid + 1;
        };
        return -1;
    }
};
solution1 obj1;
solution2 obj2;

int main()
{
    //Driver code
    while (true)
    {
        int n;
        cin >> n;
        int arr[n];
        for (size_t i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        cout << arr[obj1.peak_element(arr, n)] << endl;
        cout << arr[obj2.peak_element(arr, n)] << endl;
    }
    return 0;
}