#include <bits/stdc++.h>
using namespace std;
class solution
{
public:
    int sum_of_naturals(int n)
    {
        //write your code here
        if (n == 0)
        {
            return 0;
        }
        return n + sum_of_naturals(n - 1);
    }
    void print_1_to_n(int n)
    {
        if (n == 0)
        {
            return;
        }
        print_1_to_n(n - 1);
        cout << n << " ";
    }
    void print_n_to_1(int n)
    {
        if (n == 0)
        {
            return;
        }
        cout << n << " ";
        print_n_to_1(n - 1);
    }
    bool is_palindrome(string str, int start, int end)
    {
        if (str[start] != str[end])
        {
            return false;
        }
        if (start > end)
        {
            return true;
        }
        return is_palindrome(str, start + 1, end - 1);
    }
    /*
    IMPORTANT NOTE:
        TAIL RECURSION(RECURSION AT LAST) ARE ALWAYS BETTER THEN HEAD RECURSION(RECURSION IS NOT THE LAST).BECAUSE MORDEN COMPILERS USE SOME TECHNIQUES TO REDUCE THE SPACE CMPLAXITY OF TAIL RECURSION.
    */
};
solution obj;

int main()
{
    //Driver code
    cout << obj.sum_of_naturals(5);
    cout << endl;
    cout << obj.is_palindrome("123565321", 0, 8);
    cout << endl;
    obj.print_1_to_n(5);
    cout << endl;
    obj.print_n_to_1(5);
    cout << endl;
    obj.sum_of_naturals(5);
    cout << endl;
    return 0;
}