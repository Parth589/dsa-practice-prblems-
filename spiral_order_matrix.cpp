#include <iostream>
#include <vector>
using namespace std;
class solution
{
public:
    void spiral_order(vector<vector<int>> arr) // => time complexity : O(N)
    {
        //write your code here
        int R = arr.size();
        int C = arr[0].size();
        vector<vector<bool>> seen(R, vector<bool>(C, false));
        int l = 0, r = C - 1; // l=> left, r=> right
        int t = 0, b = R - 1; // t=> top, b=> bottom
        //run the loop
        // int n;
        while (l <= r && t <= b)
        {
            // direction 1
            for (int i = l; i <= r; i++)
            {
                if (seen[t][i] == false)
                {
                    cout << arr[t][i] << " ";
                    seen[t][i] = true;
                }
            }

            // direction 2
            for (int i = t; i <= b; i++)
            {
                if (seen[i][r] == false)
                {
                    cout << arr[i][r] << " ";
                    seen[i][r] = true;
                }
            }

            //direction 3
            for (int i = r; i >= l; i--)
            {
                if (seen[b][i] == false)
                {
                    seen[b][i] = true;
                    cout << arr[b][i] << " ";
                }
            }

            // direction 4
            for (int i = b; i > t; i--)
            {
                if (seen[i][l] == false)
                {
                    cout << arr[i][l] << " ";
                    seen[i][l] = true;
                }
            }
            t++;
            b--;
            l++;
            r--;
        }
    }

    void spiral_order_recursive(vector<vector<int>> arr, vector<vector<bool>> seen, int l, int r, int t, int b)
    {
        if ((l > r) && (t > b))
        {
            return;
        }
        // direction 1
        for (int i = l; i <= r; i++)
        {
            if (seen[t][i] == false)
            {
                cout << arr[t][i] << " ";
                seen[t][i] = true;
            }
        }

        // direction 2
        for (int i = t; i <= b; i++)
        {
            if (seen[i][r] == false)
            {
                cout << arr[i][r] << " ";
                seen[i][r] = true;
            }
        }

        //direction 3
        for (int i = r; i >= l; i--)
        {
            if (seen[b][i] == false)
            {
                seen[b][i] = true;
                cout << arr[b][i] << " ";
            }
        }

        // direction 4
        for (int i = b; i > t; i--)
        {
            if (seen[i][l] == false)
            {
                cout << arr[i][l] << " ";
                seen[i][l] = true;
            }
        }
        spiral_order_recursive(arr, seen, l + 1, r - 1, t + 1, b - 1);
    }
};
solution obj;
int main()
{
    vector<vector<int>> arr = {{1, 2, 3},
                               {4, 5, 6},
                               {4, 5, 6},
                               {4, 5, 6},
                               {7, 8, 9},
                               {10, 11, 12}};
    int R = arr.size();
    int C = arr[0].size();
    vector<vector<bool>> seen(R, vector<bool>(C, false));
    obj.spiral_order(arr);
    cout << endl;
    cout << endl;
    obj.spiral_order_recursive(arr, seen, 0, 2, 0, 5);
    return 0;
}