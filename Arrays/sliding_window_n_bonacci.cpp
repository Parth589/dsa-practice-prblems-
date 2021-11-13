#include <bits/stdc++.h>
using namespace std;
class solution
{
public:
    /*
        Problem : print first m element of n-bonacci series
        if n=3;
        the series will be : 0 0 1 1 2 4 7 13
        first n-1 element will be 0. nth element will be 1; after that, every element is sum of last n elements
*/
    void n_bonacci(int n, int m)
    {
        int printed = 0;
        list<int> window(n - 1, 0);
        window.push_back(1);
        int current_sum = 1;
        for (auto i = window.begin(); i != window.end() && printed < m; i++)
        {
            cout << (*i) << "\t";
            printed++;
        }
        if (printed == m)
        {
            return;
        }
        while (printed < m)
        {
            int next_element = current_sum;
            cout << next_element << "\t";
            current_sum -= window.front();
            window.pop_front();
            window.push_back(next_element);
            current_sum += next_element;
            printed++;
        }
    }
};
solution obj;

int main()
{
    //Driver code
    obj.n_bonacci(4, 10);
    return 0;
}