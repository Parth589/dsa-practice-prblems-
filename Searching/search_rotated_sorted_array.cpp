#include <bits/stdc++.h>
using namespace std;
class solution
{
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

public:
    int search(int arr[], int low, int high, int key)
    {
        //write your code here
        if (low > high)
        {
            return -1;
        }

        int mid = (low + high) / 2;
        if (key == arr[mid])
        {
            return mid;
        }
        if (arr[low] <= arr[mid])
        {
            //left half is sorted
            if (key < arr[mid] && key >= arr[low])
            {
                //key should be in left half
                return binary_search(arr, key, low, mid - 1);
            }
            else
            {
                return search(arr, mid + 1, high, key);
            }
        }
        else
        {
            //right half is sorted
            if (key > arr[mid] && key <= arr[high])
            {
                //key should be in right half
                return binary_search(arr, key, mid + 1, high);
            }
            else
            {
                return search(arr, low, mid - 1, key);
            }
        }
        return -1;
    }
    int search_iter(int arr[], int n, int key)
    {
        int low = 0, high = n - 1;
        while (low <= high)
        {
            int mid = (low + high) / 2;
            if (arr[mid] == key)
            {
                return mid;
            }
            //check if left half is sorted
            if (arr[mid] > arr[low])
            {
                if (key < arr[mid] && key >= arr[low]) //key is present in left half
                    high = mid - 1;

                else
                    low = mid + 1;
            }
            //right half is sorted
            else
            {
                if (key > arr[mid] && key <= arr[high])
                    low = mid + 1;
                else
                    high = mid - 1;
            }
        }
        return -1;
    }
};
solution obj;

int main()
{
    //Driver code
    cout << "Start:" << endl;
    while (true)
    {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (size_t i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        cout << obj.search_iter(arr, n, x);
    }
    return 0;
}

// int low = 0, high = n - 1;
// int mid = (low + high) / 2;
// if (arr[mid] == key)
//     return mid;
// //check if first half is sorted or not
// if (arr[mid] > arr[low])
// {
//     if (arr[mid] > key && arr[low] <= key)
//     {
//         return binary_search(arr, key, low, mid - 1);
//     }
//     return -1;
// }
// else if (arr[mid] < arr[high])
// {
//     if (key > arr[mid] && key <= arr[high])
//     {
//         return binary_search(arr, key, mid + 1, high);
//     }
//     return -1;
// }
// return -1;