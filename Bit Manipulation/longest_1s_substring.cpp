#include <bits/stdc++.h>
using namespace std;
class solution
{
public:
    int longest_substring(int n)
    {
        //write your code here
        int max_ = 0, current_max = 0;

        while (n)
        {
            while ((n & 1) == 1)
            {
                n = n >> 1;
                current_max++;
            }
            if (max_ < current_max)
            {
                max_ = current_max;
            }
            current_max = 0;
            n = n >> 1;
        }
        return max(max_, current_max);
    }
};
solution obj;

int main()
{
    //Driver code
    cout << obj.longest_substring(153);
    return 0;
}
