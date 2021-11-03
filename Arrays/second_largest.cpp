#include <bits/stdc++.h>
using namespace std;
class solution
{
public:
    int second_largest(int arr[], int n)
    {
        //write your code here
        int res = -1;
        int max = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] > arr[max])
            {
                res = max;
                max = i;
            }
            else if (arr[i] < arr[max] && arr[i] > arr[res] && res != -1)
            {
                res = i;
            }
        }
        return res;
    }
};
solution obj;

int main()
{
    //Driver code
    int arr[8] = {1, 5, 89, 5, 2, 600};
    int n = 8;
    int cap = 6;
    cout << obj.second_largest(arr, cap);
    return 0;
}