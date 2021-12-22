#include <bits/stdc++.h>
using namespace std;
class solution
{
    void reverse(string &str, int low, int high)
    {
        while (low < high)
        {
            char tmp = str[low];
            str[low] = str[high];
            str[high] = tmp;
            low++;
            high--;
        }
    }

public:
    void reverse_words(string &str)
    {
        int start = 0, end = 0;
        int n = str.length();
        while (end < n)
        {
            while (str[end] != ' ' && end < n)
            {
                end++;
            }
            reverse(str, start, end - 1);
            start = (++end);
        }
    }
};
solution obj;

int main()
{
    //Driver code
    string str;
    cout << "start" << endl;
    while (true)
    {
        getline(cin, str);
        obj.reverse_words(str);
        cout << str << endl;
    }
    return 0;
}