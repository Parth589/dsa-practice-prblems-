#include <iostream>
using namespace std;
int binary(int arr[], int low, int high, int key)
{
    if (!(low <= high))
    {
        return -1;
    }
    int mid = (low + high) / 2;
    if (arr[mid] == key)
    {
        return mid;
    }
    if (arr[mid] > key)
    {
        return binary(arr, low, mid - 1, key);
    }
    return binary(arr, mid + 1, high, key);
}
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    
    cout << binary(arr, 0, 4, 5);
    return 0;
}