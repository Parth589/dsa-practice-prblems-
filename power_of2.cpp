#include <bits/stdc++.h>
using namespace std;
class solution1
{
public:
    bool power_of_2(int n)
    {
        return ((n>0) &&( !(n & (n - 1))));
    }
};

class solution2
{
public:
    bool power_of_2(int x)
    {
        //write your code here
        int ans = 1;
        for (int i = 0; i < 32; i++)
        {
            if (x == ans)
                return true;
            else if (ans > x)
            {
                return false;
            }
            ans *= 2;
        }
        return false;
    }
};
solution1 obj1;
solution2 obj2;

int main()
{
    //Driver code
    int t;
    cin>>t;
    // cout<<sizeof(int)<<endl;
    while (t--)
    {
        int n;
        cin >> n;
        if (obj1.power_of_2(n))
            cout << "true" << endl;
        else
            cout << "false" << endl;
        if (obj2.power_of_2(n))
            cout <<"true" << endl;
        else
            cout << "false" << endl;
    }
    return 0;
}