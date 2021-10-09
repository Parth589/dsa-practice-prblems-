// to print all subset of a given array
#include <iostream>
#include <vector>
using namespace std;
//itrative method
void printSubset(vector<int> arr)
{
    int n=arr.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            for (int k = i; k < j; k++)
            {
                cout << arr[k] << " ";
            }
            cout << endl;
        }
    }
}

//recursive approach : all subsequances(power set)
void printPowerSet(vector<int> arr, vector<int> output, int index = 0)
{
    //base case
    if (index == arr.size())
    {
        for (auto i = output.begin(); i != output.end(); i++)
        {
            cout << (*i) << " ";
        }
        cout << endl;
        return;
    }
    //processing
    //excluding the element arr[index]
    printPowerSet(arr, output, index + 1);
    //including the element
    output.push_back(arr[index]);
    printPowerSet(arr, output, index + 1);
}

//recursive approach: all subsets
void print(vector<int> arr, int index = 0)
{
    if (index == arr.size())
    {
        return;
    }
    for (int j = 1; j <= arr.size(); j++)
    {
        for (int k = index; k < j; k++)
        {
            cout << arr[k] << " ";
        }
        cout << endl;
    }
    print(arr, index + 1);
}
int main()
{
    // int arr[3] = {1, 2, 3};
    // printSubset(arr, 3);
    vector<int> arr = {1, 2, 3};
    vector<int> op;
    // printPowerSet(arr, op);
    print(arr);
    return 0;
}