#include <iostream>
using namespace std;
class solution
{
public:
    int binary_search(int arr[], int key, int low, int high)
    {
        //write your code here
        int mid;
        while (low <= high)
        {
            mid = (low + high) / 2;
            if (arr[mid] == key)
            {
                return mid;
            }
            else if (arr[mid] > key)
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        return -1;
    }
};
solution obj;
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    cout << obj.binary_search(arr, 5, 0, 4);
    return 0;
}