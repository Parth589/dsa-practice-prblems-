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
    /*
                        ------------>> Unbounded Binary Search <<--------------                     
    Problem : Given an infinite array which have size tends to infinite. You have to return the index of the element n
    */
    int search(int arr[], int n)
    {
        //write your code here
        //neive method: ->O(position of element)
        // int i = 0;
        // while (true)
        // {
        //     if (arr[i] == n)
        //         return i;
        //     if (arr[i] > n)
        //         return -1;
        //     i++;
        // }
        // return -1;

        //efficient approach: O(log(position of element))
        int i = 0;
        if (arr[i] == n)
            return i;
        if (arr[i] > n)
            return -1;
        i++;
        while (true) //O(log(pos));
        {
            if (arr[i] == n)
            {
                return i;
            }
            if (arr[i] > n)
            {
                return binary_search(arr, n, (i / 2), i); //O(log(pos));
            }
            i *= 2;
        }
        return -1;
    }
};
solution obj;

int main()
{
    //Driver code
    cout << "Start:" << endl;
    int n, x;
    cin >> n >> x;
    int arr[n];
    for (size_t i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << obj.search(arr, x);
    return 0;
}
