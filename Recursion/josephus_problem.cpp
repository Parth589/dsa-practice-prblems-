#include <bits/stdc++.h>
using namespace std;
bool power_of_2(int n);

class solution
{
public:
    int josephus_problem(int n, int k)
    {
        //write your code here
        if (n == 1)
        {
            return 0;
        }
        return (josephus_problem(n - 1, k) + k) % n;
    }
};
solution obj;
int main()
{
    cout << "start :" << endl;
    int t, n, k;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        cout << obj.josephus_problem(n, k) << endl;
    }
    return 0;
}
// int josephus_problem(int n)
// {
//     //write your code here
//     //direct way:
//     //the result 1 occurs at every power of 2.it jumps for 2 times(the result will always be an odd number).
//     int res = 1;
//     if (power_of_2(n)) //->O(1)
//     {
//         return res;
//     }
//     int power_of_2 = 1; //2^0
//     int num = power_of_2;
//     while (power_of_2 < n) //-> O(log n)
//     {
//         num = power_of_2;
//         power_of_2 = power_of_2 << 1; //multipication by 2^1
//     }
//     // for (int i = 0; i < (n - num); i++) //-> O(n)
//     // {
//     //     res += 2;
//     // }// this can be replaced by:
//     res += (2 * (n - num)); //->O(1)
//     return res;
// }
// bool power_of_2(int n)
// {
//     if (((n & (n - 1)) == 0) && (n != 0))
//     {
//         return true;
//     }
//     return false;
// }