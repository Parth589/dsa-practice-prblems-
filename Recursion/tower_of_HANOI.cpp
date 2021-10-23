#include <bits/stdc++.h>
using namespace std;
class solution
{
public:
    int tower_of_hanoi(int n, int a = 1, int b = 2, int c = 3) //-> Time complexity: theta (2^n), Space Complexity : theta (n)
    {
        int count = 0;
        //write your code here
        if (n == 1)
        {
            //move disk from a to c
            cout << "Move " << a << " -> " << c << " Using " << b << endl;
            return 1;
        }
        //set all n-1 disk:
        count += tower_of_hanoi(n - 1, a, c, b); //using PMI we can assume that it will definately work

        //move the last disk to a to c:
        cout << "Move " << a << " -> " << c << " Using " << b << endl;
        count++;
        //put all n-1 disk b to c
        count += tower_of_hanoi(n - 1, b, a, c); //using PMI we can assume that it will definately work
        return count;
    }
};
solution obj;

int main()
{
    //Driver code
    cout << obj.tower_of_hanoi(3);
    return 0;
}