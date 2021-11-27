#include <bits/stdc++.h>
using namespace std;
class solution1
{
    int sumOf(int a[], int low, int high)
    {
        int res = 0;
        for (size_t i = low; i <= high; i++)
            res += a[i];

        return res;
    }

public:
    int minimum_pages(int arr[], int low, int high, int k)
    {
        int n = high - low + 1;
        if (n == 1)
            return arr[low];
        if (k == 1)
            return sumOf(arr, low, high);
        int res = INT_MAX;
        int i, tmp;
        for (i = low; i < high; i++)
            res = min(res, max(minimum_pages(arr, i + 1, high, k - 1), sumOf(arr, low, i)));

        return res;
    }
};

class solution2
{
public:
    int minimum_pages(int arr[], int n, int k)
    {
        //write your code here
        return -1;
    }
};
solution1 obj1;
solution2 obj2;

int main()
{
    //Driver code
    int n, k;
    cin >> n >> k;
    int arr[n];
    for (size_t i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << obj1.minimum_pages(arr, 0, n - 1, k);
    return 0;
}