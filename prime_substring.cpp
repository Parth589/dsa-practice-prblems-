#include <bits/stdc++.h>
using namespace std;
class solution
{
public: 
    int binary_to_int(string str)
    {
        int n = str.length();
        int p = 1;
        int ans = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            if (str[i] == '1')
            {
                ans += p;
            }
            p *= 2;
        }
        return ans;
    }

    /* Qs: given a binary string u have to find if there is a substring which is binary representation of a prime number */
    bool prime_substring(string str)
    {
        // int n = str.length();
        // for (size_t i = 0; i < n; )
        // {
        //     int s=90;
        //     for (size_t j = 1; j <= n - i; j++)
        //     {
        //         s=90;
        //         cout << str.substr(i, j) << endl;
        //     }
        //     i++;
        // }

        return true;
    }
};
solution obj;
int main()
{
    cout << "start" << endl;
    while (true)
    {
        string str="ABC";
        // cin >> str;
        // cout << obj.binary_to_int(str) << endl;
        obj.prime_substring(str);
    }

    return 0;
}