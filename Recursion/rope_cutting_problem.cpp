#include <bits/stdc++.h>
using namespace std;
/*
    problem statement :
    given an integer n denoting the size of rope.You have to make the rope fully cutted when you can only a,b, or c units from the rope. If it is not possible to cut the rope then return -1.
    or if possible then return maximum number of cuts that can be made.
*/
class solution
{
public:
    int Maximum_cuts(int n, int a, int b, int c)
    {
        //write your code here
        //base case
        if (n == 0)
        {
            return 0; // rope has been cut successfully
        }
        if (n < 0)
        {
            return -1; // rope can't be cut by this way
        }

        int res1 = Maximum_cuts(n - a, a, b, c); //cut the rope a units
        int res2 = Maximum_cuts(n - b, a, b, c); //cut the rope b units
        int res3 = Maximum_cuts(n - c, a, b, c); //cut the rope c units
        int res = max(res1, max(res2, res3));

        // if ((res1 == -1) && (res2 != -1) && (res3 != -1))
        // {
        //     cout << " cut of: " << n << endl;
        //     return 1 + max(res2, res3);
        // }
        // if ((res2 == -1) && (res1 != -1) && (res3 != -1))
        // {
        //     cout << " cut of: " << n << endl;
        //     return 1 + max(res1, res3);
        // }
        // if ((res3 == -1) && (res1 != -1) && (res2 != -1))
        // {
        //     cout << " cut of: " << n << endl;
        //     return 1 + max(res1, res2);
        // }
        // if ((res2 == -1) && (res1 == -1) && (res3 != -1))
        // {
        //     cout << " cut of: " << n << endl;
        //     return 1 + res3;
        // }
        // if ((res2 == -1) && (res1 != -1) && (res3 == -1))
        // {
        //     cout << " cut of: " << n << endl;
        //     return 1 + res1;
        // }
        // if ((res2 != -1) && (res1 == -1) && (res3 == -1))
        // {
        //     cout << " cut of: " << n << endl;
        //     return 1 + res2;
        // }
        // if ((res2 == -1) && (res1 == -1) && (res3 == -1))
        // {
        //     return -1;
        // }
        // cout << " cut of: " << n << endl;
        /* ************INSTEAD OF DOING STUFF LIKE ABOVE JUST MAKE ANOTHER RESULT RES TO FIND MAX OF ALL RESULTS  */

        if (res == -1) // if all cuts are failed to cut the rope completely
            return -1;

        else
            return 1 + max(res1, max(res2, res3));
    }
};
solution obj;

int main()
{
    //Driver code
    int n, a, b, c;
    cin >> n >> a >> b >> c;
    cout << obj.Maximum_cuts(n, a, b, c);
    561522;
    return 0;
}