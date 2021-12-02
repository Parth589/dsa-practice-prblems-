#include <bits/stdc++.h>
using namespace std;
class solution1
{
public:
    float median(int a1[], int a2[], int n1, int n2)
    {
        //neive method -> Using merge process of Merge-Sort Time : O(n1+n2) Space :O(n1+n2)

        int p1 = 0, p2 = 0, p3 = 0, n3 = n1 + n2;
        int tmp[n3];
        while (p1 < n1 && p2 < n2)
        {
            if (a1[p1] < a2[p2])
            {
                tmp[p3] = a1[p1];
                p1++;
            }
            else if (a1[p1] > a2[p2])
            {
                tmp[p3] = a2[p2];
                p2++;
            }
            else
            {
                tmp[p3] = a1[p1];
                p1++;
            }
            p3++;
        }
        while (p1 < n1)
        {
            tmp[p3] = a1[p1];
            p1++;
            p3++;
        }
        while (p2 < n2)
        {
            tmp[p3] = a2[p2];
            p2++;
            p3++;
        }
        if ((n3 & 1) == 1)
        {
            return tmp[(n3 - 1) / 2];
        }
        return (tmp[(n3 - 1) / 2] + tmp[(n3 + 1) / 2]) / 2.0f;
    }
};

class solution2
{
public:
    float median(int a1[], int a2[], int n1, int n2)
    {
        int p1 = 0, p2 = 0, p3 = 0, n3 = n1 + n2;
        int previous = min(a1[p1], a2[p2]);
        int current = previous;
        while (p1 < n1 && p2 < n2)
        {
            if (a1[p1] > a2[p2])
            {
                previous = current;
                current = a2[p2];
                p2++;
            }
            else
            {
                previous = current;
                current = a1[p1];
                p1++;
            }
            if ((n3 & 1) == 0 && p3 == (n3 / 2))
            {
                // the median will be n3/2 + n3/2+1/2
                return (previous + current) / 2.0;
            }
            else if ((n3 & 1) == 1 && p3 == (n3 / 2))
            {
                //the median will be at n3/2+1 th position
                return current;
            }
            p3++;
        }
        while (p1 < n1)
        {
            previous = current;
            current = a1[p1];
            p1++;
            if ((n3 & 1) == 0 && p3 == (n3 / 2))
            {
                // the median will be n3/2 + n3/2+1/2
                return (previous + current) / 2.0;
            }
            else if ((n3 & 1) == 1 && p3 == (n3 / 2))
            {
                //the median will be at n3/2+1 th position
                return current;
            }

            p3++;
        }
        while (p2 < n2)
        {
            previous = current;
            current = a2[p2];
            p2++;
            if ((n3 & 1) == 0 && p3 == (n3 / 2))
            {
                // the median will be n3/2 + n3/2+1/2
                return (previous + current) / 2.0;
            }
            else if ((n3 & 1) == 1 && p3 == (n3 / 2))
            {
                //the median will be at n3/2+1 th position
                return current;
            }
            p3++;
        }
        if ((n3 & 1) == 0 && p3 == (n3 / 2))
        {
            // the median will be n3/2 + n3/2+1/2
            return (previous + current) / 2.0;
        }
        else if ((n3 & 1) == 1 && p3 == (n3 / 2))
        {
            //the median will be at n3/2+1 th position
            return current;
        }
        return 0;
    }
};
solution1 obj1;
solution2 obj2;

int main()
{
    //Driver code
    while (true)
    {
        int n1, n2;
        cin >> n1 >> n2;
        int a1[n1], a2[n2];
        for (size_t i = 0; i < n1; i++)
        {
            cin >> a1[i];
        }
        for (size_t i = 0; i < n2; i++)
        {
            cin >> a2[i];
        }
        cout << "ans: " << obj1.median(a1, a2, n1, n2) << endl;
        cout << "ans: " << obj2.median(a1, a2, n1, n2) << endl;
    }
    return 0;
}