#include <bits/stdc++.h>
using namespace std;
class solution
{
public:
    int add1(int n)
    {
        //write your code here
        int m = 1;
        while ((n & m) != 0)
        {
            n = n ^ m;
            m = m << 1;
        }
        n = n ^ m;
        return n;
    }
};
solution obj;

int main()
{
    //Driver code
    cout << obj.add1(23);
    return 0;
}