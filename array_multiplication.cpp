// #include <iostream>
// #include <vector>
// using namespace std;
// vector<int> multiply(vector<int> a, vector<int> b)
// {
//     vector<vector<int>> c;
//     int a_size = a.size();
//     int b_size = b.size();
//     int carry = 0;
//     for (int i = 0; i < b_size; i++)
//     {
//         for (int j = a_size - 1; j >= 0; j--)
//         {
//             int res = b[i] * a[j];
//             int f_res = res % 10;
//             carry = res / 10;
//             c[i].push_back(f_res + carry);
//         }
//         reverse(c[i]);
//         //ekam nu sunya
//         for (int k = 0; k < (b_size - i) - 1; k++)
//         {
//             c[i].push_back(0);
//         }
//     }
//     // sarvado
//     // int s_carry=0;
//     // vector<int> f;
//     // for (int i = 0; i < ; i++)
//     // {
//     //     /* code */
//     //     c[i].back();
//     //     f.push_back(c[i].back());
//     // }

//     return f;
// }
// void reverse(vector<int> &a)
// {
//     int n = a.size();
//     int mid = (0 + (n - 1)) / 2;
//     for (int i = 0; i <= mid; i++)
//     {
//         a[i] = a[n - i - 1];
//     }
// }
// int main()
// {

//     return 0;
// }
// C++ program to compute factorial of big numbers
#include <iostream>
using namespace std;

// Maximum number of digits in output
#define MAX 500

int multiply(int x, int res[], int res_size);

// This function finds factorial of large numbers
// and prints them
void factorial(int n)
{
    int res[MAX];

    // Initialize result
    res[0] = 1;
    int res_size = 1;

    // Apply simple factorial formula n! = 1 * 2 * 3 * 4...*n
    for (int x = 2; x <= n; x++)
        res_size = multiply(x, res, res_size);

    cout << "Factorial of given number is \n";
    for (int i = res_size - 1; i >= 0; i--)
        cout << res[i];
}

// This function multiplies x with the number
// represented by res[].
// res_size is size of res[] or number of digits in the
// number represented by res[]. This function uses simple
// school mathematics for multiplication.
// This function may value of res_size and returns the
// new value of res_size
int multiply(int x, int res[], int res_size)
{
    int carry = 0; // Initialize carry

    // One by one multiply n with individual digits of res[]
    for (int i = 0; i < res_size; i++)
    {
        int prod = res[i] * x + carry;

        // Store last digit of 'prod' in res[]
        res[i] = prod % 10;

        // Put rest in carry
        carry = prod / 10;
    }

    // Put carry in res and increase result size
    while (carry)
    {
        res[res_size] = carry % 10;
        carry = carry / 10;
        res_size++;
    }
    return res_size;
}

// Driver program
int main()
{
    factorial(100);
    return 0;
}
