#include <iostream>
#include <cmath>
using namespace std;
inline int MSB(int n) // to reset all the bits excluding MSB
{

    int k = (int)(log2(n)); // To find the position of the most significant set bit

    return 1 << k; // To return the the value of the number with set bit at k-th position
}

int main()
{
    int n = 12; //[ 1100 ]
    n = 13;
    cout << (n & (n - 1)) << endl; // 8 -> 1000 -> reset the rightmost set bit
    cout << (n & (~(n - 1))) << endl;
    return 0;
}