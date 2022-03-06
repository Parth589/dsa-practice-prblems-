#include <bits/stdc++.h>
using namespace std;
class solution1
{
public:
    vector<int> intersection(vector<int> a, vector<int> b)
    {
        vector<int> res;
        for (int i = 0; i < a.size(); i++)
        {
            for (size_t j = 0; j < b.size(); j++)
            {
                if (a[i] == b[j])
                    res.push_back(a[i]);
            }
        }
        return res;
    }
};

class solution2
{
public:
    vector<int> intersection(vector<int> a, vector<int> b)
    {
        a.
    }
};
solution1 obj1;
solution2 obj2;

int main()
{
    //Driver code
    return 0;
}