#include <bits/stdc++.h>
using namespace std;
class solution
{
public:
    void substring_k(string &str, int k, string op = "", int index = 0)
    {
        //write your code here
        if (index == str.length())
        {
            if (op.length() == k)
                cout << op << endl;
            return;
        }
        substring_k(str, k, op, index + 1);
        op = op + str[index];
        substring_k(str, k, op, index + 1);
    }
    void substring(string str, int k)
    {
        int n = str.length();
        for (int i = 0; i <= n - k; i++)
        {
            int j = i + (k - 1);
            for (int k = i; k <= j; k++)
            {
                cout << str[k];
            }
            cout << endl;
        }
    }
};
solution obj;
int main()
{
    obj.substring("ABCDEF", 2);
    cout << endl
         << endl
         << endl;
    string s = "ABCDEF";
    obj.substring_k(s, 2);
    return 0;
}