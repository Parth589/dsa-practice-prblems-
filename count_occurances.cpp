#include <bits/stdc++.h>
using namespace std;
class solution
{
public:
    string change(string s)
    {
        int n = s.length();
        string str;
        int i = 0;
        while (i < n)
        {
            int j = i;
            while (j < n && s[j] == s[i])
                j++;
            str += s[i] + to_string(j - i);
            i = j;
        }
        return str;
    }
};
solution obj;
int main()
{
    //Driver code
    string str = "aabbbccccccccd";
    cout << obj.change(str) << endl;
    array<int, 5> arr;
    return 0;
}