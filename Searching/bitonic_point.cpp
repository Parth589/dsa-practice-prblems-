#include <bits/stdc++.h>
using namespace std;
/*
    Given an array arr of n elements which is first increasing and then may be decreasing, find the maximum element in the array.
Note: If the array is increasing then just print then last element will be the maximum value.

Example 1:

Input: 
n = 9
arr[] = {1,15,25,45,42,21,17,12,11}
Output: 45
Explanation: Maximum element is 45.
Example 2:

Input: 
n = 5
arr[] = {1, 45, 47, 50, 5}
Output: 50
Explanation: Maximum element is 50.
Your Task:  

Expected Time Complexity: O(logn)
Expected Auxiliary Space: O(1)

Constraints:
3 ≤ n ≤ 106
1 ≤ arri ≤ 106
*/
class solution
{
public:
    int bitonic_point(int arr[], int n)
    {
        //write your code here
        /*
            the array element sorted as like a one mountain.
            solution idea ;
                We can modify the standard Binary Search algorithm for the given type of arrays.
        i) If the mid element is greater than both of its adjacent elements, then mid is the maximum.
        ii) If mid element is greater than its next element and smaller than the previous element then maximum lies on left side of mid. Example array: {3, 50, 10, 9, 7, 6}
        iii) If mid element is smaller than its next element and greater than the previous element then maximum lies on right side of mid. Example array: {2, 4, 6, 8, 10, 3, 1}
         */
        int low = 0, high = n - 1;
        while (low <= high)
        {
            if (low == high)
            {
                return arr[low];
            }
            int mid = (low + high) / 2;
            if (arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1])
            {
                return arr[mid];
            }
            else if (arr[mid] > arr[mid + 1] && arr[mid] < arr[mid - 1])
            {
                high = mid - 1;
            }
            else if (arr[mid] < arr[mid + 1] && arr[mid] > arr[mid - 1])
            {
                low = mid - 1;
            }
        }
        return -1;
    }
};
solution obj;

int main()
{
    //Driver code
    int n = 9;
    int arr[5];
    cout << obj.bitonic_point(arr, n);
    //Driver code
    
    return 0;
}