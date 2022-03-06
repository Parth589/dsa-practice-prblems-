#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool uniqueOccurrences(vector<int> &arr)
    {
        int n = arr.size();

        int cons1, cons2;
        cons1 = cons2 = 1001;
        // phase 1: store all occurances
        vector<int> pos(cons1, 0);
        vector<int> neg(cons2, 0);
        for (int i = 0; i < n; i++)
        {
            if (arr[i] < 0)
            {
                neg[-arr[i]]++;
            }
            else
            {
                pos[arr[i]]++;
            }
        }
        // phase 2: check if all occurances are unique
        vector<bool> is_occured(n + 1, false);
        for (size_t i = 0; i < n + 1; i++)
        {
            if (is_occured[pos[i]] == true || is_occured[neg[i]] == true) // if element is already occured
            {
                return false;
            }
            else
            {
                if (pos[i] != 0)
                    is_occured[pos[i]] = true;
                if (is_occured[neg[i]] == true)// if element is already occured by the previous statement
                    return false;
                if (neg[i] != 0)
                    is_occured[neg[i]] = true;
            }
        }
        return true;
    }
};
Solution obj;

int main()
{
    //Driver code
    vector<int> arr = {1, 2, 2, 1, 1, 3};
    if (obj.uniqueOccurrences(arr))
        cout << "TRUE" << endl;
    else
        cout << "FALSE" << endl;
    return 0;
}