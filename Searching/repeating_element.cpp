#include <bits/stdc++.h>
using namespace std;
class solution1
{
public:
    int repeating_element(int arr[], int n) //my sol.
    {
        int m = arr[0];
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] > m)
                m = arr[i];
            sum += arr[i];
        }
        int exp_sum = (m * (m + 1)) / 2;
        return (sum - exp_sum) / (n - 1 - m);
    }
};

class solution2
{
public:
    int repeating_element(int arr[], int n)
    {
        //write your code here
        //efficient aproach:->O(n)
        int slow, fast;
        slow = fast = arr[0];
        do
        {
            slow = arr[slow] + 1;
            fast = arr[arr[fast] + 1] + 1;
        } while (slow != fast);
        slow = arr[0];
        while (slow != fast)
        {
            slow = arr[slow] + 1;
            fast = arr[fast] + 1;
        }
        return slow - 1;
    }
};
solution1 obj1;
solution2 obj2;

int main()
{
    //Driver code
    while (true)
    {
        int n;
        cin >> n;
        int arr[n];
        for (size_t i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        cout << obj1.repeating_element(arr, n) << endl;
        cout << obj2.repeating_element(arr, n) << endl;
    }
    return 0;
}
