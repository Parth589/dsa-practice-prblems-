#include <bits/stdc++.h>
using namespace std;
/*
        Given an array of length N consisting of only 0s and 1s in random order. Modify the array to segregate 0s on left side and 1s on the right side of the array.

Example 1:

Input:
N = 5
arr[] = {0, 0, 1, 1, 0}
Output: 0 0 0 1 1

Example 2:

Input:
N = 4
Arr[] = {1, 1, 1, 1}
Output: 1 1 1 1
Explanation: There are no 0 in the given array, 
so the modified array is 1 1 1 1.


Expected Time Complexity: O(N)
Expected Auxiliary Space: O(1)


Constraints:
1 ≤ N ≤ 107
0 ≤ arr[i] ≤ 1
*/
class solution
{
public:
    void segregate0and1(int arr[], int n)
    {
        // code here
        /*
            Solution idea:
            make two pointers at start and at end.
            find 1 with p1 and find 0 with p2
            after that swap them
            if p1 and p2 cross each other then the array is sorted

        */
        int i1 = 0, i2 = n - 1;
        while (i1 < i2)
        {
            while (arr[i1] == 0 && (i1 < i2))
            {
                i1++;
            }
            while (arr[i2] == 1 && (i1 < i2))
            {
                i2--;
            }
            if (i1 < i2)
            {
                arr[i1] = 0;
                arr[i2] = 1;
                i1++;
                i2--;
            }
        }
    }
};
solution obj;

int main()
{
    //Driver code
    return 0;
}