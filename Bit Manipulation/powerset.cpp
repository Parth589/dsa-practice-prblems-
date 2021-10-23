#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
class solution
{
public:
    vector<string> power_set(string str)
    {
        int size = str.size();
        int range = 1 << size; //instead of pow (2,size) use 1<<size;
        vector<string> res(range);
        for (int i = 0; i < range; i++)
        {
            int n = i;
            int count = 0;
            while (n)
            {
                if ((n & 1) == 1)
                {
                    // cout << str[count];
                    res[i] = res[i] + str[count];
                }
                n = n >> 1;
                count++;
            }
            // cout << endl;
        }
        return res;
    }
};
solution obj;
void print(vector<string> arr)
{
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
}
int main()
{
    print(obj.power_set("abc"));
    return 0;
}