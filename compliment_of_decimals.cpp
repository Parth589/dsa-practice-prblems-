#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
	int function(int n)
	{
		if (n == 0)
			return 1;
		int mask = 0;
		int m = n;
		int count = 0;
		while (m != 0)
		{
			count++;
			m = m >> 1;
		}

		for (int i = 0; i < count; i++)
		{
			mask = (mask << 1) | 1;
			cout << "mask:" << mask << endl;
		}
		cout << "mask:" << mask << endl;
		return ((~n) & mask);
	}
};
Solution obj;
int main()
{
	//Driver code
	int t;
	cin >> t;
	while (t--)
	{
		//testcases
		int n;
		cin >> n;
		cout << obj.function(n) << endl;
	}
	return 0;
}