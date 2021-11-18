#include <bits/stdc++.h>
using namespace std;
class solution
{
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

public:
    int maximum_circular_subarray_sum(int arr[], int n)
    {
        //write your code here
        // Inefficient approach :O(n^2)
        int max_sum = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            int current_sum = 0, j = i;
            do
            {
                current_sum += arr[j];
                max_sum = max(max_sum, current_sum);
                j = (j + 1) % n;
            } while (j != i);
        }
        return max_sum;
    }
    int max_circular_subarray_sum(int arr[], int n)
    {
        //case 1: elements are not wrapped
        int non_wrapped_sum = maximum_subarray_sum(arr, n); //O(n)
        //case 2: elements are wrapped
        int max_wrap = 0;
        for (int i = 0; i < n; i++) // O(n)
        {
            max_wrap += arr[i];
            arr[i] *= (-1);
        }

        max_wrap += maximum_subarray_sum(arr, n); //O(n)
        return max(non_wrapped_sum, max_wrap);    //O(1)
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
    cout << obj.maximum_circular_subarray_sum(arr, n) << endl;
    cout << obj.max_circular_subarray_sum(arr, n) << endl;

    return 0;
}