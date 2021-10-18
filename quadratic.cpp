#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
class solution
{
public:
    vector<int> quadratic_roots(int a, int b, int c)
    {
        //write your code here
        vector<int> ans;
        float D = (b * b) - (4 * a * c);
        if (D < 0)
        {
            ans.push_back(-1);
            return ans;
        }
        else
        {
            float sq = sqrt(D);
            float root1 = ((0 - b) + (sq)) / (2 * a);
            float root2 = ((0 - b) - (sq)) / (2 * a);
            ans.push_back((int)min(root1, root2));
            ans.push_back((int)min(root1, root2));
        }
    }
};
solution obj;
int main()
{

    return 0;
}