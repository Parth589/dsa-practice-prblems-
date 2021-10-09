#include <iostream>
using namespace std;
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
void subSequance(string str, int index = 0)
{
    if (index == str.length())
    {
        return;
    }
    cout << "The string is :" << str << endl;
    string tmp = str;
    for (int i = 0; i < str.length(); i++)
    {
        char temp = str[index];
        str[index] = str[i];
        str[i] = temp;
        cout << str << endl;
        str = tmp;
    }
    subSequance(str, index + 1);
}
int main()
{
    // subString("abc");
    subSequance("abc");
    return 0;
}