#include <iostream>
using namespace std;
class solution
{
public:
    int first_occuring_element(int arr[], int n, int key)
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
                if ((arr[mid - 1] != key) || (mid == 0))
                {
                    return mid;
                }
                high = mid - 1;
            }
        }
        return -1;
    }
};
solution obj;
int main()
{
    int n, key;
    cin >> n >> key;
    int arr[n];
    for (size_t i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << obj.first_occuring_element(arr, n, key);
    return 0;
}