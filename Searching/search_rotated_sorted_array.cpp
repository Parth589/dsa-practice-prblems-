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
    /* idea: if the sorted rotated array if devided into 2 parts one of the half must be sorted. */
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
            if (arr[mid] >= arr[low])
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
class solution2
{
private:
public:
    int search(vector<int> a, int key)
    {
        int n = a.size();
        int start = 0, end = n - 1;
        while (start <= end)
        {
            int mid = start + (end - start) / 2;
            if (a[mid] == key)
                return mid;
            else if (a[mid] < a[end])
            {
                //mid is at 2nd line
                if (a[mid] <= key <= a[end]) // if key lies in 2nd line
                    start = mid + 1;
                else
                    end = mid - 1;
            }
            else
            {
                //mid is at 1st line
                if (a[start] <= key <= a[mid]) //key lies in 1st line
                    end = mid - 1;
                else
                    start = mid + 1;
            }
        }
        return -1;
    }
};
solution2 o2;
int main()
{
    //Driver code
    cout << "Start:" << endl;
    while (true)
    {
        int n, x;
        cin >> n >> x;
        int arr[n];
        vector<int> a(n);
        for (size_t i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (size_t i = 0; i < n; i++)
        {
            a[i] = arr[i];
        }
        cout << obj.search_iter(arr, n, x) << endl;
        cout << o2.search(a, x);
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