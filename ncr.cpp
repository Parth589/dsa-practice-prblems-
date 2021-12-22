#include <bits/stdc++.h>
using namespace std;
class solution
{
public:
    //not complited
    int ncr(int n, int r)
    {

        return ncr(n - 1, r) + ncr(n - 1, r - 1);
    }
};
solution obj;

int main()
{
    //Driver code
    int n;
    cout<<"Enter :"<<endl;
    cin>>n;
    cout<<n;
    return 0;
}