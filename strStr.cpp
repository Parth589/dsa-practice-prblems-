#include <bits/stdc++.h>
using namespace std;
class solution
{
public:
    int strstr(string a, string b)
    {
        int n1 = a.length(), n2 = b.length();
        //if b is an empty string return 0
        if (n2 == 0)
        {
            return 0;
        }
        if (n1 < n2)
        {
            return -1;
        }
        for (size_t i = 0; i <= n1 - n2; i++)
        {
            if (a[i] == b[0])
            {
                int j;
                for (j = 0; j < n2; j++)
                {
                    if (a[i + j] != b[j])
                        break;
                }
                if (j == n2)
                    return i;
            }
        }
        return -1;
    }
};
solution obj;

int main()
{
    //Driver code
    cout<<obj.strstr("i m noob", "i ");
    return 0;
}