#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    long long appleAndCoupon(int n, int m, vector<int> arr) {
        // Write your code here.
        sort(arr.begin(), arr.end());
        long long res = 0;
        int n = arr.size();
        long long skipped = arr[n - m];
        for (int i = 0; i < n; i++) {
            if (arr[i] == skipped) {
                continue;
            }
            res += arr[i];
        }
        return res;
    }

};
Solution obj;
int main()
{
    //Driver code
    int t;
    while (t--) {
        int n;
        int m;
        vector < int. arr(n);

    }
    return 0;
}