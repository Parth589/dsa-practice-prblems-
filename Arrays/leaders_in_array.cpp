#include <bits/stdc++.h>
using namespace std;
class solution
{
public:
    /*
    Leader:-
        An element said to be a leader iff all the element to the right side of it are smaller then it.    
    */
    void leaders(int arr[], int n)
    {
        //write your code here
        //inefficient approach ->O(n^2)
        for (int i = 0; i < n; i++)
        {
            bool is_leader = true;
            for (int j = i + 1; j < n; j++)
            {
                if (arr[j] >= arr[i])
                {
                    is_leader = false;
                    break;
                }
            }
            if (is_leader)
            {
                cout << arr[i] << " ";
            }
        }
        cout << endl;
        // efficient approach -> O(n){ prints in reverse order}
        // int current_leader = n - 1; //indexof current leader
        // cout << arr[current_leader] << " ";
        // for (int i = n - 2; i >= 0; i--)
        // {
        //     if (arr[i] > arr[current_leader])
        //     {
        //         cout << arr[i] << " ";
        //         current_leader = i;
        //     }
        // }
        // cout << endl;
        // variation of efficient approach ->time : O(n)->Space : O(n)
        int tmp[n];
        int current_leader = n - 1; //indexof current leader
        int tmp_top = 0;            //index where the next element store in temp array
        tmp[tmp_top] = arr[current_leader];
        tmp_top++;
        // int arr[6] = {5, 4, 3, 2, 1, 3};
        // tmp={3}

        for (int i = n - 2; i >= 0; i--)
        {
            if (arr[i] > arr[current_leader])
            {
                current_leader = i;
                tmp[tmp_top] = arr[current_leader];
                tmp_top++;
            }
        }
        for (int i = tmp_top - 1; i >= 0; i--)
        {
            cout << tmp[i] << " ";
        }
    }
};
solution obj;

int main()
{
    //Driver code
    int arr[6] = {5, 4, 3, 2, 1, 3};
    obj.leaders(arr, 6);
    return 0;
}