#include <bits/stdc++.h>
using namespace std;
class solution
{
public:
    int sqrt(int n)
    {
        //write your code here
        // inefficient approach ->O(n^(1/2));
        // int i;
        // for (i = 0; i * i <= n; i++)
        // {
        // }
        // return i - 1;

        //efficient approach ->O(logn);
        int low = 0;
        int high = n;
        while (low <= high)
        {
            int mid = (low + high) / 2;
            if (((mid * mid < n) && ((mid + 1) * (mid + 1) > n)) || (mid * mid == n))
            {
                return mid;
            }
            if ((mid * mid) > n)
            {
                high = mid - 1;
            }
            else if ((mid * mid) < n)
            {
                low = mid + 1;
            }
        }
        return -1;
    }
};
solution obj;

int main()
{
    //Driver code
    int n;
    cin >> n;
    cout << obj.sqrt(n) << endl;

    return 0;
}