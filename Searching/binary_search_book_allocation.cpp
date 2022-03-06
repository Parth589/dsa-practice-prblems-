#include <bits/stdc++.h>
using namespace std;
class solution1
{
    int sum(vector<int> a, int l, int r)
    {
        int res;
        for (size_t i = l; i <= r; i++)
        {
            res += a[i];
        }
        return res;
    }

public:
    int allocate_books(vector<int> a, int k, int low, int high)
    {
        //recursive solution
        //base cases
        int n = a.size();
        if (n == 1)
            return a[low];
        if (k == 1)
            return sum(a, low, high);
        // recursive calls
        int res = INT_MAX;
        for (size_t i = low; i < high; i++)
        {
            // 1st student will read books from low to i (both inclusive)
            int abc = sum(a, low, i);
            // and pass books from i+1 to high(both inclusive) to other k-1 students
            int tmp = max(allocate_books(a, k - 1, i + 1, high), abc);
            res = min(res, tmp);
        }
        return res;
    }
};

class solution2
{
    bool is_possible(vector<int> a, int k, int mid)
    {
        int current_student = 0;
        int current_sum = 0;
        for (size_t i = 0; i < a.size(); i++)
        {
            current_student++;
            while (current_sum <= mid)
            {
                current_sum += a[i];
                i++;
            }
            if (current_student > k)
                return false;
            current_sum = 0;
            i -= 2;
        }
    }

public:
    int allocate_books(vector<int> a, int k)
    {
        //find the answer range ( max(arr) to sum(arr))
        int low = INT_MIN, high = 0;
        for (int i = 0; i < a.size(); i++)
        {
            high += a[i];
            low = max(low, a[i]);
        }
        // apply binary search for the ans range
        int res = INT_MAX;
        while (low <= high)
        {
            int mid = low + (high - low) / 2;
            if (is_possible(a, k, mid))
            {
                res = mid;
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        return res;
    }
};
solution1 obj1;
solution2 obj2;

int main()
{
    //Driver code
    return 0;
}