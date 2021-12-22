#include <iostream>
#include <cmath>
#include <algorithm>
#define ull unsigned long long int
using namespace std;
string to_binary(int n)
{
    string str;
    int x = sizeof(int) * 8;
    for (int i = 0; i < x; i++)
    {
        int bit = n & 1;
        str += to_string(bit);
        n = n >> 1;
    }
    reverse(str.begin(), str.end());
    return str;
}
int decimal_to_binary(int n)
{
    ull b_num = 0;
    int cnt = 0;
    while (n != 0)
    {
        int rem = n % 2;
        b_num += rem * pow(10, cnt);
        n /= 2;
        cnt++;
    }
    return b_num;
}
int main()
{
    while (true)
    {
        int n;
        cin >> n;
        cout << to_binary(n) << endl;
        cout << decimal_to_binary(n) << endl;
    }
    return 0;
}