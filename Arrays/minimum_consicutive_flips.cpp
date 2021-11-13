#include <bits/stdc++.h>
using namespace std;
class solution
{
public:
    /*
    Problem:  Given a binary array containing only 0s and 1s. you have to print the minimum consicutive 0s or 1s to make all elements same
*/
    void minimum_flips(int arr[], int n)
    {
        //write your code here
        //the optimized approach is the second group is the element which have to be flipped.
        int target = 1;
        if (arr[0])
        {
            target = 0;
        }

        for (int i = 0; i < n; i++)
        {
            if (arr[i] == target)
            {
                cout << "From " << i << " TO ";
                while (arr[i] == target && i < n)
                {
                    i++;
                }
                cout << i - 1 << endl;
            }
        }
    }
};
solution obj;

int main()
{
    //Driver code
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    obj.minimum_flips(arr, n);
    return 0;
}