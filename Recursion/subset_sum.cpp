#include <bits/stdc++.h>
using namespace std;
class solution
{
public:
    //given an integer array find the subset which have sum as the given sum
    bool subset_sum(vector<int> arr,int sum)
    {
        //write your code here
        int n=arr.size();
        for (size_t i = 0; i < n; i++)
        {
            int s=arr[i];
            if (sum == s)
            {
                cout<<i<<endl;
                return true;
            }
            for (size_t j = i+1; j < n; j++)
            {
                s+=arr[j];
                if(sum==s){
                    cout << i << " to " << j << endl;
                    return true;
                }
            }
        }
        return false;
        
    }
};
solution obj;

int main()
{
    //Driver code
    vector<int> arr = {1, 2, 3};
    if(obj.subset_sum(arr,3)){
        cout<<"y";
    }
    else{
        cout<<"N";
    }
    return 0;
}