#include <iostream>
#include <cmath>
using namespace std;
class solution
{
public:
    bool function_name(int n, int k[], int kn)
    {
        //write your code here
        unsigned int number = 0;// a number which have k[] th set bit
        for (int i = 0; i < kn; i++)
        {
            number += pow(2, k[i] - 1);
        }
        if ((number & n) == number)
        {
            //all given bits are set
            return true;
        }
        return false;
    }
};
solution obj;
int main()
{
    int k[] = {1, 4, 3};
    cout << obj.function_name(13, k, 3);
    return 0;
}