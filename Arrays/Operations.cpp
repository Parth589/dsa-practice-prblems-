#include <bits/stdc++.h>
using namespace std;
class solution
{
public:
    void insert(int arr[], int n, int index, int value)
    {
        //write your code here
        if (index >= n)
        {
            return;
        }
        else
        {
            for (int i = n - 1; i >= index; i--)
            {
                arr[i] = arr[i - 1];
            }
            arr[index] = value;
        }
    }

    void delete_(int arr[], int n, int element)
    {
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == element)
            {
                for (; i < n; i++)
                {
                    arr[i] = arr[i + 1];
                }
                break;
            }
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
    int arr[8] = {1, 5, 89, 5, 2, 6};
    int n = 8;
    int cap = 6;
    obj.insert(arr, n, 2, 56);
    cap++;
    obj.print_arr(arr, cap);
    obj.delete_(arr, n, 56);
    cap--;
    obj.print_arr(arr, cap);
    return 0;
}