#include <bits/stdc++.h>
using namespace std;
class solution
{
public:
    void move_all_0(int arr[], int n)
    {
        int index = 0; //index that shows where should the next non-zero element added
        for (int i = 0; i < n; i++)
        {
            if (arr[i] != 0)
            {
                swap(arr[index], arr[i]);
                index++;
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
    int arr[6] = {5, 6, 0, 3, 0, 7};
    obj.move_all_0(arr, 6);
    obj.print_arr(arr, 6);
    return 0;
}