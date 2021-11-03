#include <bits/stdc++.h>
using namespace std;
class solution
{
public:
    bool is_sorted(int arr[], int n)
    {
        //write your code here
        for (int i = 0; i < n; i++)
        {
            if (arr[i] > arr[i + 1])
                return false;
        }
        return true;
    }
};
solution obj;

int main()
{
    //Driver code
    int arr[8] = {1, 2, 2, 5, 5, 89, 600};
    int n = 8;
    int cap = 6;
    cout << obj.is_sorted(arr, cap);
    return 0;
}