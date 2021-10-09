#include <iostream>
using namespace std;
//bruteforce approch --> O(n^2)
int rightm(int arr[], int n, int index);
int leftm(int arr[], int n, int index);
long long trappingWater(int arr[], int n)
{
    long long res = 0;
    for (int i = 1; i < n - 1; i++)
    {
        res += min(leftm(arr, n, i), rightm(arr, n, i)) - arr[i];
    }
    return res;
}
int leftm(int arr[], int n, int index)
{
    int leftmax = -1;
    for (int i = 0; i <= index; i++)
    {
        leftmax = max(leftmax, arr[i]);
    }
    return leftmax;
}
int rightm(int arr[], int n, int index)
{
    int leftmax = -1;
    for (int i = n - 1; i >= index; i--)
    {
        leftmax = max(leftmax, arr[i]);
    }
    return leftmax;
}
int main()
{

    // int arr[3] = {1, 2, 3};
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << trappingWater(arr, n) << endl;
    cout << trapped(arr, n) << endl;
    return 0;
}
