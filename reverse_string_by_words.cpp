#include <bits/stdc++.h>
using namespace std;
class solution
{
    void print(vector<string> v){
        for (size_t i = 0; i < v.size(); i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
public:
    void reverse_string(string s)
    {
        vector<string> t;
        string tmp;
        int count=0;
        for (int i = 0; i < s.length(); i++)
        {
            while (s[i] != ' ' && i < s.length())
            {
                tmp+=s[i];
                i++;
            }
            t.push_back(tmp);
            tmp.erase();
        }
        reverse(t.begin(),t.end());
        print(t);
    }
};
solution obj;

int main()
{
    //Driver code
    string str;
    cout<<"strart"<<endl;
    getline(cin,str);
    obj.reverse_string(str);
    return 0;
}