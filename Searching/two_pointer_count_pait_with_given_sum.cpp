#include <bits/stdc++.h>
using namespace std;
class solution
{
public:
    int count_pair_with_given_sum(int arr[], int n, int sum)
    {
        //write your code here
        int count = 0;
        int low = 0, high = n - 1;
        while (low < high)
        {
            if (arr[low] + arr[high] == sum){
                
                count++;}
            if (arr[low] + arr[high] > sum)
                high--;
            else
                low++;
        }
        return count;
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
    cout << obj.count_pair_with_given_sum(array, n, sum) << endl;

    return 0;
}