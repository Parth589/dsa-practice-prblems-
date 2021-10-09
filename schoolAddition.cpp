#include <iostream>
#include <vector>
using namespace std;
vector<int> addition(vector<int> op1, vector<int> op2)
{
    int carry = 0;
    vector<int> res;
    int range = min(op1.size(), op2.size());
    for (int i = range - 1; i >= 0; i--)
    {
        int tmp = op1[i] + op2[i] + carry;
        if (tmp < 9)
        {
            res.push_back(tmp);
        }
        else
        {
            res.push_back(tmp % 10);
            carry = 1;
        }
    }

    

    return res;
}
int main()
{
    vector<int> p1 = {1, 2, 3};
    vector<int> p2 = {1, 2, 3};

    vector<int> res = addition(p1, p2);
    for (int i = res.size() - 1; i >= 0; i--)
    {
        cout << res[i];
    }

    return 0;
}