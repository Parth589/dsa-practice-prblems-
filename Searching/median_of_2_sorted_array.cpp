#include <bits/stdc++.h>
using namespace std;
class solution
{
public:
    float median(int a[], int b[], int n1, int n2)
    {
        //swap array if they are not in perfact order
        if (n1 > n2)
        {
            int *tmp = a;
            a = b;
            b = a;
        }
        int low = 0, high = n1 - 1;
        while (low <= high)
        {
            int i1 = (low + high) / 2;
            int i2 = ((n1 + n2 + 1) / 2) - i1;
            int max1 = (i1 == 0) ? INT_MIN : a[i1 - 1];
            int max2 = (i2 == 0) ? INT_MIN : b[i2 - 1];
            int min1 = (i1 == n1 - 1) ? INT_MAX : a[i1];
            int min2 = (i2 == n2 - 1) ? INT_MAX : b[i2];
            //check if reached the mid
            if (max(max1, max2) < min(min1, min2))
            {
                if (n1 + n2 & 1 == 1)
                {
                    return max(max1, max2);
                }
                return (max(max1, max2) + min(min1, min2)) / 2.0f;
            }
            //if first array have smaller element ,go to right
            else if (a[i1] < max(a[i1 - 1], b[i2 - 1]))
            {
                low = i1 + 1;
            }
            // if second array have smaller element go to left
            else
            {
                high = i1 - 1;
            }
        }
        return -1;
    }
};
solution obj;

int main()
{
    //Driver code
    int n1 = 4, n2 = 4;
    // cin >> n1 >> n2;
    int arr[n1] = {1, 5, 8, 12};
    int arr2[n2] = {4, 7, 11, 56};
    cout << obj.median(arr, arr2, n1, n2) << endl;
    return 0;
}