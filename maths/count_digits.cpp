#include <iostream>
#include <cmath>
using namespace std;

int count_digits(int n)
{
    //method 1 {iterative method}
    // int tmp = n;
    // int res = 0;
    // while (tmp > 0)
    // {
    //     res++;
    //     tmp = tmp / 10;
    // }
    // return res;

    //method 2 {recursive method}
    // if (n <= 0)
    // {
    //     return 0;
    // }
    // return 1 + count_digits(n / 10);

    //method 3 {log method}  ->best method
    return floor(log10(n) + 1);
}

int main()
{
    cout << count_digits(123);
    return 0;
}