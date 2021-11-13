#include <bits/stdc++.h>
using namespace std;
class solution
{
public:
    int maximum_consicutive_1s(int arr[], int n)
    {
        //write your code here
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            int current_ans = 0;
            if (arr[i] == 1)
            {
                while (arr[i] == 1)
                {
                    current_ans++;
                    i++;
                }
                ans = max(ans, current_ans);
            }
        }
        return ans;
    }
};
solution obj;

int main()
{
    //Driver code
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << obj.maximum_consicutive_1s(arr, n);
    return 0;
}