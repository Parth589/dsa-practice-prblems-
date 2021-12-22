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
            //check if reached the mid
            if (max(a[i1 - 1], b[i2 - 1]) < min(a[i1], b[i2]))
            {
                return (max(a[i1 - 1], b[i2 - 1]) + min(a[i1], b[i2])) / 2.0f;
            }
            else if (a[i1] < max(a[i1 - 1], b[i2 - 1]))
            {
                low = i1 + 1;
            }
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
    int n1 = 4, n2 = 5;
    // cin >> n1 >> n2;
    int arr[n1] = {1, 5, 8, 12};
    int arr2[n2] = {4, 7, 11, 56, 60};
    cout << obj.median(arr, arr2, n1, n2) << endl;
    return 0;
}