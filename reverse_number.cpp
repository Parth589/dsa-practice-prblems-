#include <bits/stdc++.h>
using namespace std;
/*
 reverse a number and return it .
  if the reversed number cross integer limit return 0
*/
class Solution {
public:
	int function(int x) {
		int ans = 0;
		while (x != 0) {
			int digit = x % 10;
			if ((ans > INT_MAX / 10) || (ans < INT_MIN / 10)) {
				return 0;
			}
			ans = ans * 10 + digit;

			x /= 10;
		}
		return ans;
	}

};
Solution obj;
int main()
{
	//Driver code
	int t;
	cin >> t;
	while (t--) {
		int ;
		cin >> n;
		cout << bj.function(n) << endl;
	}
	return 0;
}