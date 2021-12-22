#include <bits/stdc++.h>
using namespace std;
class solution
{
public:
    bool func(int arr[], int n)
    {
        //write your code here
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == 1)
                for (int j = 1; j < n; j = j + 1)
                {
                    for (int k = 0; k != i; k = k + j % n)
                    {
                    }
                }
        }
    }
};
solution obj;

int main()
{
    //Driver code
    int n;
    cin >> n;
    int a[n];
    for (size_t i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    if (obj.func(a, n))
    {
        cout << "YES" << endl;
    }
    else
        cout << "NO";

    return 0;
}