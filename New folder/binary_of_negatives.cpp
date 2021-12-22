#include <bits/stdc++.h>
using namespace std;
class Solution{
	public:
		string function(int n){
			//write your code here
			string str;
			for (int i = 0; i < 32; ++i)
			{
				if ((n&1)==1)
					str+="1";
				
				else
					str+="0";
				n>>=1;
			}
			reverse(str.begin(),str.end());
			return str;
		}

};
Solution obj;
int main()
{
    //Driver code
	int n;
	std::cin>>n;
	cout<<(obj.function(n));
    return 0;
}