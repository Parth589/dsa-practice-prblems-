#include <bits/stdc++.h>
using namespace std;
class solution
{
public:
    int factorial(int n)
    {
        int res = 1;
        for (int i = 1; i <= n; i++)
        {
            res *= i;
        }
        return res;
    }
    vector<int> factorial_of_large_number(int n)
    {
        vector<int> res;
        res.push_back(1);
        for (int i = 2; i <= n; i++)
        {
            int carry = 0;
            for (int j = 0; j < res.size(); j++)
            {
                int val = res[j] * i + carry;
                res[j] = val % 10;
                carry = val / 10;
            }
            while (carry != 0)
            {
                res.push_back(carry % 10);
                carry /= 10;
            }
        }
        reverse(res.begin(), res.end());
        return res;
    }
};
solution obj;
void print(vector<int> arr)
{
    for (auto i = arr.begin(); i != arr.end(); i++)
    {
        cout << (*i) << " ";
    }
    cout << endl;
}
int main()
{
    //Driver code
    // cout << obj.factorial(5);
    print(obj.factorial_of_large_number(523));
    return 0;
}