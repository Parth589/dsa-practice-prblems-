#include <bits/stdc++.h>
using namespace std;
class solution
{
    bool pair_as_sum_x_v2(int arr[], int low, int high, int sum)
    {
        //write your code here
        //efficient approach :->O(n); two pinter approach
        while (low < high)
        {
            if (arr[low] + arr[high] == sum)
                return true;
            if (arr[low] + arr[high] > sum) //here i want the less sum and it could be found by high--
                high--;
            if (arr[low] + arr[high] < sum) //here i want the more sum and it could be found by low++
                low++;
        }
        return false;
    }

public:
    bool triplets_as_given_sum(int arr[], int n, int sum)
    {
        //write your code here
        //neive method:O(n^3)
        for (size_t i = 0; i < n - 2; i++)
        {
            for (size_t j = 0; j < n - 1; j++)
            {
                for (size_t k = 0; k < n; k++)
                {
                    if (arr[i] + arr[j] + arr[k] == sum)
                        return true;
                }
            }
        }
        return false;
    }

    bool triplets_as_given_sum_V2(int arr[], int n, int sum)
    {
        //write your code here
        //efficient method:O(n^2)
        for (size_t i = 0; i < n - 2; i++)
        {
            if (arr[i] < sum && this->pair_as_sum_x_v2(arr, i + 1, n - 1, sum - arr[i]))
                return true;
        }
        return false;
    }
};
solution obj;

int main()
{
    //Driver code
    int n, sum;
    cin >> n >> sum;
    int array[n];
    for (size_t i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    if (obj.triplets_as_given_sum(array, n, sum))
        cout << "Y1" << endl;
    else
        cout << "N1" << endl;

    if (obj.triplets_as_given_sum_V2(array, n, sum))
        cout << "Y2" << endl;
    else
        cout << "N2" << endl;
    return 0;
}