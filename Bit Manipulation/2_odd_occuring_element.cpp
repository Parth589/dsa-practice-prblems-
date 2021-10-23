#include <bits/stdc++.h>
using namespace std;
class solution
{
public:
    vector<int> odd_occuring(vector<int> arr)
    {
        //write your code here
        //algorithm:
        //  1. find  XOR of all elements
        //  2. find the first set bit n in XOR
        //  3. make 2 groups where G1 contains those number which have n th bit set, and G2 does not
        //  4. find XOR of each groups
        vector<int> res;
        int XOR = 0;
        for (int i = 0; i < arr.size(); i++)
        {
            XOR = arr[i] ^ XOR;
        }
        int number = XOR & (~(XOR - 1));
        int res1 = 0, res2 = 0;
        for (int i = 0; i < arr.size(); i++)
        {
            if (arr[i] & number == 1)
            {
                res1 = res1 ^ arr[i];
            }
            else
            {
                res2 = res2 ^ arr[i];
            }
        }
        res.push_back(res1);
        res.push_back(res2);
        return res;
    }
};
void print(vector<int> arr)
{
    for (auto i = arr.begin(); i != arr.end(); i++)
    {
        cout << (*i) << " ";
    }
    cout << endl;
}
solution obj;

int main()
{
    vector<int> arr = {1, 6, 2, 2, 2, 2, 2, 3, 3, 5, 5, 6, 11, 11, 11, 1};
    print(obj.odd_occuring(arr));
    return 0;
}