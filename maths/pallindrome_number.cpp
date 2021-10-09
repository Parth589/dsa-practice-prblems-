#include <iostream>
#include <cmath>
using namespace std;
bool is_palindrome(int n)
{
    int rev = 0;
    int tmp = n;
    while (tmp != 0)
    {
        rev = (rev * 10) + (tmp % 10);
        tmp /= 10;
    }
    if (rev == n)
    {
        return true;
    }
    return false;
}
int main()
{
    cout << is_palindrome(14455441);
    return 0;
}