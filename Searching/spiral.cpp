
#include <iostream>
    using namespace std;
int main()
{
    int m, n;
    cin >> m >> n;

    int arr[m][n];
    bool seen[m][n];
    for (int i = 0; i < m; i++)
    { 
        for (int j = 0; j < n; j++)
        {
            seen[i][j] = false;
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    int sr = 0;     //top
    int er = m - 1; //bottom
    int sc = 0;     //left
    int ec = n - 1; //right

    while (sr <= er and sc <= ec)
    {
        int i1;
        for (i1 = sc; i1 <= ec; i1++)
        {
            if (!seen[sr][i1])
            {
                cout << arr[sr][i1] << ", ";
                seen[sr][i1] = true;
            }
        }

        int i2;
        for (i2 = sr + 1; i2 <= er; i2++)
        {
            if (!seen[i2][ec])
            {
                cout << arr[i2][ec] << ", ";
                seen[i2][ec] = true;
            }
        }

        int i3;
        for (i3 = ec - 1; i3 >= sc; i3--)
        {
            if (!seen[er][i3])
            {
                cout << arr[er][i3] << ", ";
                seen[er][i3] = true;
            }
        }

        int i4;
        for (i4 = er - 1; i4 >= sr + 1; i4--)
        {
            if (!seen[i4][sc])
            {
                cout << arr[i4][sc] << ", ";
                seen[i4][sc] = true;
            }
        }
        sc++;
        sr++;
        ec--;
        er--;
    }
    cout << "END";

    return 0;
}

