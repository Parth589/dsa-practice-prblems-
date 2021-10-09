#include <iostream>
#include <vector>
using namespace std;
void reverse(vector<int> &arr, int start, int end)
{
    for (int i = start; i < ((end - start) / 2); i++)
    {
        int tmp = arr[i];
        arr[i] = arr[(end - start) - i - 1];
        arr[(end - start) - i - 1] = tmp;
    }
    for (auto i = arr.begin(); i != arr.end(); i++)
    {
        cout << *i << " ";
    }
    cout << endl;
}
void rotate_(vector<int> &arr, int d)
{
    //optimized aproach
    // 1> reverse first d elements
    // 2> reverse remaining elements
    // 3> reverse the entire array
    reverse(arr, 0, d - 1);
    reverse(arr, d, arr.size() - 1);
    reverse(arr, 0, arr.size() - 1);
}
int main()
{
    vector<int> arr = {1, 2, 3, 45, 6};
    // rotate_(arr, 2);
    for (auto i = arr.begin(); i != arr.end(); i++)
    {
        cout << *i << " ";
    }
    cout << endl;
    reverse(arr, 1, 4);
    for (auto i = arr.begin(); i != arr.end(); i++)
    {
        cout << *i << " ";
    }
    cout << endl;
    return 0;
}