#include <bits/stdc++.h>
using namespace std;
class solution
{
    bool module(int arr[], int low, int high, int sum)
    {
        while (low < high)
        {
            if ((arr[low] * arr[low]) + (arr[high] * arr[high]) == sum)
            {
                cout << arr[low] << "^2 + " << arr[high] << "^2 = ";
                return true;
            }
            if ((arr[low] * arr[low]) + (arr[high] * arr[high]) < sum)
                low++;
            else
                high--;
        }
        return false;
    }

public:
    bool pythagorian_triplet(int arr[], int n)
    {
        //write your code here
        for (int i = 2; i < n; i++)
        {
            if (this->module(arr, 0, i - 1, (arr[i] * arr[i])))
            {
                cout << arr[i] << "^2" << endl;
                return true;
            }
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
        int n;
        cin >> n;
        int array[n];
        for (size_t i = 0; i < n; i++)
        {
            cin >> array[i];
        }
        if (obj.pythagorian_triplet(array, n))
            cout << "Y1" << endl;
        else
            cout << "N1" << endl;
    }
    return 0;
}