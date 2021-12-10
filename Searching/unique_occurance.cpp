#include <bits/stdc++.h>
using namespace std;
class solution
{
public:
    bool unique_occurance(int arr[], int n)
    {
        int cons1, cons2;
        cons1 = cons2 = 1000;
        int pos[cons1] = {0}, neg[cons2] = {0};
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
        for (size_t i = 0; i < cons1; i++)
        {
            if (pos[i] != 0 && pos[i] != i)
                return false;
            if (neg[i] != 0 && neg[i] != i)
                return false;
        }
        return true;
    }
};
solution obj;

int main()
{
    //Driver code
    int arr[] = {1, 2, 3, 2, 56, 3};
    if (obj.unique_occurance(arr, 6))
        cout << "TRUE" << endl;
    else
        cout << "FALSE" << endl;
    return 0;
}