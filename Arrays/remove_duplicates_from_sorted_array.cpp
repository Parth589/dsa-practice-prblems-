#include <bits/stdc++.h>
using namespace std;
class solution
{
public:
    int remove_duplicates(int arr[], int n)
    {
        //non-efficient approach
        //make a temp array and store all distinct element to it.
        // int tmp[n];
        // int res = 0;
        // tmp[0] = arr[0];
        // res++;
        // for (int i = 1; i < n; i++)
        // {
        //     if (arr[i] != arr[i - 1])
        //     {
        //         tmp[res] = arr[i];
        //         res++;
        //     }
        // }
        // for (int i = 0; i < res; i++)
        // {
        //     arr[i] = tmp[i];
        // }
        // return res;

        // -->  "efficient approach"

        int index = 1;
        for (int i = 1; i < n; i++)
        {
            if (arr[i] != arr[i - 1])
            {
                arr[index] = arr[i];
                index++;
            }
        }
        return index;
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
    int arr[8] = {1, 2, 2, 5, 5, 89, 600};
    int n = 8;
    int cap = 7;
    cap = obj.remove_duplicates(arr, cap);
    n = cap + 1;
    obj.print_arr(arr, cap);
    return 0;
}