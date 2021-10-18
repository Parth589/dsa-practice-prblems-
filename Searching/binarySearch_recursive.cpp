#include <iostream>
using namespace std;
class solution
{
public:
    int binary_search(int arr[], int key, int low, int high)
    {
        //write your code here
        if (low > high)
        {
            return -1;
        }

        int mid = (low + high) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else
        {
            if (arr[mid] > key)
                return binary_search(arr, key, low, mid - 1);

            return binary_search(arr, key, mid + 1, high);
        }
    }
};
solution obj;
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    cout << obj.binary_search(arr, 5, 0, 4);
    return 0;
}