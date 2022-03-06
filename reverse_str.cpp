#include <bits/stdc++.h>
using namespace std;
class solution
{
public:
    string reverse_words(string s)
    {
        string res;
        int n = s.length();
        int i = 0;
        while (i < n)
        {
            while (i < n && s[i] == ' ')
            {
                i++;
            }
            if (i >= n)
                break;
            int j = i + 1;
            while (j < n && s[j] != ' ')
            {
                j++;
            }
            string sub = s.substr(i, j - i);
            if (res.length() == 0)
                res = sub;
            else
                res = sub + " " + res;
            i = j + 1;
        }
        return res;
    }
};
solution obj;
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string s;
        getline(cin, s);
        cout << obj.reverse_words(s) << endl;
    }
    return 0;
}