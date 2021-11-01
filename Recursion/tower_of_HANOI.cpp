#include <bits/stdc++.h>
using namespace std;
void print(stack<int> s);
class solution
{
public:
    void tower_of_hanoi(int n, stack<int> &a, stack<int> &b, stack<int> &c, char s1 = 'A', char s2 = 'B', char s3 = 'C')
    {
        //write your code here
        if (n <= 1)
        {
            cout << "Move " << a.top() << " From " << s1 << " TO " << s3 << endl;
            c.push(a.top());
            a.pop();
            return;
        }
        tower_of_hanoi(n - 1, a, c, b, 'A', 'C', 'B');
        cout << "Move " << a.top() << " From " << s1 << " TO " << s3 << endl;
        c.push(a.top());
        a.pop();
        tower_of_hanoi(n - 1, b, a, c, 'B', 'A', 'C');
    }
};
solution obj;
void print(stack<int> s)
{
    for (size_t i = 0; i < s.size(); i++)
    {
        cout << s.top() << "\t";
        s.pop();
    }
    if (s.size() != 0)
    {
        cout << s.top() << "\t";
        s.pop();
    }
    cout << endl;
}
int main()
{
    //Driver code
    stack<int> a, b, c;
    int n = 3;
    for (int i = n; i >= 1; i--)
    {
        a.push(i);
    }

    obj.tower_of_hanoi(n, a, b, c);
    print(c);
    return 0;
}