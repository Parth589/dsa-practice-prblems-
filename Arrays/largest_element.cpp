#include <bits/stdc++.h>
using namespace std;
class solution
{
public:
    int largest_element(int arr[], int n)
    {
        //write your code here
        if (n == 0)
        {
            return -1;
        }
        // int max_element = arr[0];
        int max_index = 0;
        for (int i = 1; i < n; i++)
        {
            if (arr[i] > arr[max_index])
            {
                max_index = i;
            }
        }
        return max_index;
    }
};
solution obj;

int main()
{
    //Driver code
    int arr[8] = {1, 5, 89, 5, 2, 6};
    int n = 8;
    int cap = 6;
    cout << obj.largest_element(arr, cap);
    return 0;
}