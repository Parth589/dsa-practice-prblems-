#include <bits/stdc++.h>
using namespace std;
class solution
{
public:
    vector<int> sum_till_i;
    int get_sum(int arr[], int n, int left, int right)
    {
        sum_till_i.push_back(arr[0]);
        for (int i = 1; i < n; i++)
        {
            sum_till_i.push_back(sum_till_i[i - 1] + arr[i]);
        }
        if (left != 0)
        {
            return sum_till_i[right] - sum_till_i[left - 1];
        }
        return sum_till_i[right];
        return -1;
    }
};
solution obj;
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    cout << obj.get_sum(arr, 5, 1, 1);
    return 0;
}