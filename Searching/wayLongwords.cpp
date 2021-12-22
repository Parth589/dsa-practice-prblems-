#include <bits/stdc++.h>
using namespace std;
class solution
{
public:
    void function(string str)
    {
        //write your code here
        int n = str.length();
        if (n > 10)
        {
            string s;
            s += str[0];
            s += to_string(n - 2);
            s += str[n - 1];
            cout << s << endl;
        }
        else
            cout << str << endl;
    }
};
solution obj;

int main()
{
    //Driver code
    int n;
    cin >> n;
    while (n--)
    {
        string str;
        cin >> str;
        obj.function(str);
    }
    return 0;
}