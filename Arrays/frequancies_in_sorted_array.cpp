#include <bits/stdc++.h>
using namespace std;
class solution
{
public:
    void frequancy(int arr[], int n)
    {
        //write your code here
        int start = 0, end = 0;
        while (end < n)
        {
            while (arr[end] == arr[start] && end < n)
            {
                end++;
            }
            int ferq = end - start;
            cout << arr[start] << " -> " << ferq << endl;
            start = end;
        }
    }
};
solution obj;

int main()
{
    //Driver code
    int n = 7;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    obj.frequancy(arr, n);
    return 0;
}