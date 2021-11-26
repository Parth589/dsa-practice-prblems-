#include <bits/stdc++.h>
using namespace std;
class solution
{
public:
    bool pair_as_sum_x(int arr[], int n, int sum)
    {
        //write your code here
        //neive approach :-> O(n^2) ; to take each pair and check if sum is x or not
        for (size_t i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (arr[i] + arr[j] == sum)
                {
                    return true;
                }
            }
        }
        return false;
    }

    bool pair_as_sum_x_v2(int arr[], int n, int sum)
    {
        //write your code here
        //efficient approach :->O(n); two pinter approach
        int low = 0;
        int high = n - 1;
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
};
solution obj;

int main()
{
    //Driver code
    cout << "Start:\n";
    while (true)
    {
        int n, sum;
        cin >> n >> sum;
        int array[n];
        for (size_t i = 0; i < n; i++)
        {
            cin >> array[i];
        }
        if (obj.pair_as_sum_x(array, n, sum))
            cout << "Y1" << endl;
        else
            cout << "N1" << endl;

        if (obj.pair_as_sum_x_v2(array, n, sum))
            cout << "Y2" << endl;
        else
            cout << "N2" << endl;
    }
    return 0;
}