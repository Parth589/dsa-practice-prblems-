#include <bits/stdc++.h>
using namespace std;
class solution
{
public:
    bool unique_ocuurances(vector<int> arr)
    {
        int n = arr.size();
        //  phase 1: store occurances of all elements
        int pos[1000] = {0}; // to store ocuurances of positive elment and zero
        int neg[1000] = {0}; // to store ocuurances of negative elment
        for (int i = 0; i < n; i++)
        {
            if (arr[i] < 0)
            {
                neg[-arr[i]]++;
            }
            else
            {
                pos[arr[i]]++;
            }
        }
        //  phase 2: check if every ocuurance is unique
        // bool is_occured[n + 1] = {false};
        vector<bool> is_occured(n + 1, false);
        for (int i = 0; i < 1000; i++)
        {
            if (!is_occured[pos[i]])
                return false;
            else
                is_occured[pos[i]] = true;
                
            if (!is_occured[neg[i]])
                return false;
            else
                is_occured[neg[i]] = true;
        }
        return true;
    }
};
solution obj;

int main()
{
    //Driver code
    vector<int > arr;
    int n;
    cin>>n;
    for (size_t i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    if(obj.unique_ocuurances(arr)){
        cout<<true;
    }
    else{
        cout<<false;
    }
    return 0;
}