#include <bits/stdc++.h>
using namespace std;
class solution
{
public:
    void left_rotation(int arr[], int n, int D)
    {
        //write your code here
        D = D % n;
        reverse(arr, 0, D - 1);
        reverse(arr, D, n - 1);
        reverse(arr, 0, n - 1);
    }
    void reverse(int arr[], int start, int end)
    {
        while (start < end)
        {
            int tmp = arr[start];
            arr[start] = arr[end];
            arr[end] = tmp;
            start++;
            end--;
        }
    }
    void print_arr(int arr[], int n)
    {
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << "\t";
        }
        cout << endl;
    }
};
solution obj;

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = 6;
    int d = 13;
    obj.print_arr(arr, n);
    obj.left_rotation(arr, n, d);
    obj.print_arr(arr, n);

    return 0;
}