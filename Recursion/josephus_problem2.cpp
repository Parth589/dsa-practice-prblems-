#include <bits/stdc++.h>
using namespace std;
class solution
{
public:
    int josephus(int n, int k) // time ->O(n^2) space O(n)
    {
        int total_kills = 0;
        vector<bool> arr(n, true);
        int gun_index = 0;
        //comm
        while (total_kills != n - 1)
        {
            int index_of_killed = (gun_index + k - 1) % n;
            //comm
            while (arr[index_of_killed] == false)
            {
                index_of_killed = (index_of_killed + 1) % n;
                //comm
            }
            total_kills++;
            arr[index_of_killed] = false;
            gun_index = (index_of_killed + 1) % n;
            //comm
            while (arr[gun_index] == false)
            {
                gun_index = (gun_index + 1) % n;
                // comm
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (arr[i])
                return i;
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
    cout << obj.josephus(n, 2);
    return 0;
}