#include <bits/stdc++.h>
using namespace std;
class solution
{
public:
    void subString(string str)
    {
        for (int i = 0; i < str.length(); i++)
        {
            for (int j = i; j < str.length(); j++)
            {
                for (int k = i; k <= j; k++)
                {
                    cout << str[k];
                }
                cout << endl;
            }
        }
    }

    void subSequance(string &str, int index = 0)
    {
        if (index == str.length() - 1)
        {
            cout << str << endl;
            return;
        }
        for (int i = index; i < str.length(); i++)
        {
            swap(str[i], str[index]);
            subSequance(str, index + 1);
            swap(str[i], str[index]); //back-tracking
        }
    }
};
solution obj;

int main()
{
    //Driver code
    string str = "abc";
    cout << "PERMUTATION" << endl;
    obj.subSequance(str);
    cout << " \nCOMBINATION" << endl;
    obj.subString(str);
    return 0;
}
/*    NOT WORKING CODE BELOW:   */
// void subSequance(string str, int index = 0)
// {
//     // if (index == str.length())
//     // {
//     //     return;
//     // }
//     // // cout << "The string is :" << str << endl;
//     // string tmp = str;
//     // for (int i = 0; i < str.length(); i++)
//     // {
//     //     char temp = str[index];
//     //     str[index] = str[i];
//     //     str[i] = temp;
//     //     cout << str << endl;
//     //     str = tmp;
//     // }
//     // subSequance(str, index + 1);
// }