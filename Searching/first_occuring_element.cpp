#include <iostream>
using namespace std;
//not completed
class solution
{
public:
    int first_occuring_element(int arr[], int low, int high, int key)
    {
        //write your code here
        int any_occurance = binary_search(arr, key, low, high);
        if (any_occurance == (-1))
        {
            return -1;
        }
        int first_occurance = any_occurance;
        while (arr[any_occurance - 1] == key)
        {
            first_occurance = any_occurance;
            any_occurance--;
        }
        return first_occurance;
    }

private:
    int binary_search(int arr[], int key, int low, int high)
    {
        //write your code here
        int mid;
        while (low <= high)
        {
            mid = (low + high) / 2;
            if (arr[mid] == key)
            {
                return mid;
            }
            else if (arr[mid] > key)
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        return -1;
    }
};
solution obj;
int main()
{
    int arr[] = {1, 2, 2, 2, 5, 9};
    cout << obj.first_occuring_element(arr, 0, 5, 2);
    return 0;
}