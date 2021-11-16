#include <bits/stdc++.h>
using namespace std;
class solution
{
public:
    int maximum_subarray_sum(int arr[], int n)
    {
        //write your code here
        int current_sum = 0;
        int maximum_sum = arr[0];
        for (int i = 0; i < n; i++)
        {
            current_sum += arr[i]; //add current element

            if (current_sum > maximum_sum) // if the current_element has incresed the sum
            {
                maximum_sum = current_sum;
            }
            if (current_sum < 0)
            {
                current_sum = 0; // discard the subarray
            }
        }

        return maximum_sum;
    }
};

solution obj;

int main()
{
    //Driver code
    int n;
    cin >> n;
    int arr[n];
    for (size_t i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << obj.maximum_subarray_sum(arr, n);
    return 0;
}