#include <bits/stdc++.h>
using namespace std;
class solution
{
public:
    void reverse(int arr[], int n)
    {
        //write your code here
        for (int i = 0; i < n / 2; i++)
        {
            int tmp = arr[i];
            arr[i] = arr[n - i - 1];
            arr[n - i - 1] = tmp;
        }
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
    //Driver code
    int arr[8] = {1, 2, 2, 5, 5, 89, 600};
    int n = 8;
    int cap = 7;
    obj.reverse(arr, cap);
    obj.print_arr(arr, cap);
    obj.reverse(arr, 2, 5);
    obj.print_arr(arr, cap);
    return 0;
}