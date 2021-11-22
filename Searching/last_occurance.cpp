#include <bits/stdc++.h>
using namespace std;
class solution
{
public:
    int last_occurance(int arr[], int n, int key)
    {
        //write your code here
        int low = 0, high = n - 1;
        while (low <= high)
        {
            int mid = (low + high) / 2;
            if (arr[mid] < key)
            {
                low = mid + 1;
            }
            else if (arr[mid] > key)
            {
                high = mid - 1;
            }
            else
            {
                if ((arr[mid + 1] != key) || (mid == (n - 1)))
                {
                    return mid;
                }
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
    int n, key;
    cin >> n >> key;
    int arr[n];
    for (size_t i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << obj.last_occurance(arr, n, key);
    return 0;
}