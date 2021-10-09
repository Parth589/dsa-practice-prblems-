#include <iostream>
using namespace std;
int sqrt(int n) //time ->O(log n),space -> O(1)
{
    int low = 1;
    int high = n;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (mid * mid == n)
        {
            return mid;
        }
        else if (mid * mid > n)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    // return high;//if floor value required
    // return low;
    //nearby value
    int distanceLow = (low * low) - n;
    int distancehigh = n - (high * high);
    if (distancehigh > distanceLow)
    {
        return low;
    }
    else
    {
        return high;
    }
}
int main()
{
    cout << sqrt(37);
    return 0;
}