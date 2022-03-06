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
        pair<ll, pair<ll, ll> > egcd(ll a, ll b)              //solves ax + by = gcd(a,b) = g
        {   //returns (g,(x,y))
            pair<ll, pair<ll, ll> > ret;

            if (a == 0)
            {
                ret.f = b ;
                ret.s.f = 0 ;
                ret.s.s = 1 ;
            }
            else
            {
                ll g, x, y;
                pair<ll, pair<ll, ll> > temp = egcd( b % a, a) ;
                g = temp.f;
                x = temp.s.f;
                y = temp.s.s;
                ret.f = g;
                ret.s.f = y - (b / a) * x ;
                ret.s.s = x;
            }

            return ret;
        }

        ll modinv(ll den, ll m)
        {
            pair<ll, pair<ll, ll> > ans = egcd(den, m) ;
            if (ans.f == 1)
            {
                return (ans.s.f + m) % m ;
            }
        }


        ll moddiv(ll num, ll den, ll m)        // den and m must be coprime
        {
            return (num * modinv(den, m) ) % m ;
        }

    }
    return 0;
}