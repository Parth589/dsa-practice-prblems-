#include <bits/stdc++.h>
using namespace std;
class solution
{
    int most_occuring_element(int arr[], int n)
    {
        int index = 0;
        int count = 1; // count of arr[index];
        for (int i = 1; i < n; i++)
        {
            if (arr[i] == arr[index])
            {
                count++;
            }
            else
            {
                count--;
            }
            if (count == 0)
            {
                index = i;
                count = 1;
            }
        }
        return arr[index];
    }

public:
    // int majority_element(vector<int> arr)
    // {
    //     // efficient approach by sorting an array// -> Time : O(n logn)
    //     int n = arr.size();
    //     sort(arr.begin(), arr.end());
    //     int start = 0;
    //     int end = 0;
    //     int maximum_occurance = 0;
    //     while (end != n)
    //     {
    //         start = end;
    //         while (arr[end] == arr[start] && end != n)
    //         {
    //             end++;
    //         }
    //         maximum_occurance = max(maximum_occurance, end - start);
    //         if (maximum_occurance > n / 2)
    //         {

    //             return arr[start];
    //         }
    //     }
    //     return -1;
    // }
    int majority_element(int arr[], int n)
    {
        //efficient approach -> Time : O(n) ; Space : O(1)
        /*
            Idea: step1. find the most occuring element in array
                  step2. check if it is a majority element
        */
        int most_occuring = most_occuring_element(arr, n);
        int count = 0;
        for (size_t i = 0; i < n; i++)
        {
            if (arr[i] == most_occuring)
            {
                count++;
            }
        }
        if (count > n / 2)
        {
            return most_occuring;
        }
        return -1;
    }

    // int majoriy_element(int arr[], int n)
    // {
    //     //inefficient approach -> Time : O(n^2) ; Space : O(1)
    //     for (size_t i = 0; i < n; i++)
    //     {
    //         int count = 0;
    //         for (size_t j = i; j < n; j++)
    //         {
    //             if (arr[j] == arr[i])
    //             {
    //                 count++;
    //             }
    //         }
    //         if (count >= n / 2)
    //         {
    //             return arr[i];
    //         }
    //     }
    //     return -1;
    // }
};
solution obj;

int main()
{
    int arr[7] = {4, 4, 8, 94, 4, 4, 5};
    int n = 7;
    cout << obj.majority_element(arr, n);
    return 0;
}