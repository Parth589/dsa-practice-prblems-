//problem : a stair case of size n is given. you have to find the number of possible ways when only 1,2,and 3 jumps of stairs are allowed at ones
#include <iostream>
#include <vector>
using namespace std;                             
int function(int n)
{
    if (n == 0)
    {
        return 1;
    }
    if (n < 0)
    {
        return 0;
    }
    return function(n - 1) + function(n - 2) + function(n - 3);
}
int main()
{
    cout << function(4);
    return 0;
}