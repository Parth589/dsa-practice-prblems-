#include <bits/stdc++.h>
using namespace std;
class solution
{
public:
    int pivot(int arr[], int n)
    {
        int s = 0, e = n - 1;
        while (s <= e)
        {
            int mid = s + (e - s) / 2;
            //check if mid is a pivot element
            if (arr[mid] < arr[mid + 1] && arr[mid] < arr[mid - 1])
            {
            }
        }
    }
};
solution obj;

int main()
{
    //Driver code
    return 0;
}