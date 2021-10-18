#include <iostream>
using namespace std;
//check if k th bit is set or not
class solution
{
public:
    bool Kth_bit(int n, int k)
    {
        //left shift method
        //-> make a number which have onlt k th bit set and & it with n
        return (n & (1 << (k - 1)));
        //right shift method
        //-> right shift n to get it's k th bit at end. then & it with 1
        return ((n >> (k - 1)) & 1);
    }
};
solution obj;
int main()
{
    cout << obj.Kth_bit(5, 3);
    cout << obj.Kth_bit(12, 4);
    return 0;
}
