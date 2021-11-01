#include <iostream>
#include <algorithm>
#include <cstring>
#include <vector>
#include <conio.h>
using namespace std;
class BIGINTEGER
{
private:
    string n;

public:
    BIGINTEGER(string str)
    {
        n = str;
    }
    BIGINTEGER()
    {
    }
    void print()
    {
        cout << (this->n) << endl;
    }
    BIGINTEGER add(BIGINTEGER x)
    {
        string s1 = n;
        string s2 = x.n;
        string addition;
        int c1 = s1.length() - 1, c2 = s2.length() - 1;
        int carry = 0;
        while (c1 >= 0 && c2 >= 0)
        {
            int num1 = s1[c1] - '0';
            int num2 = s2[c2] - '0';
            int result = num1 + num2 + carry;
            if (result > 9)
            {
                carry = result / 10;
                result = result % 10;
            }
            else
            {
                carry = 0;
            }
            //add result to the string
            addition += to_string(result);
            c1--;
            c2--;
        }

        while (carry != 0 && c1 >= 0)
        {
            int num = (s1[c1] - '0');
            // result
            num += carry;
            if (num > 9)
            {
                carry = num / 10;
                addition += to_string(num % 10);
            }
            else
            {
                addition += to_string(num);
                carry = 0;
            }

            c1--;
        }

        while (carry != 0 && c2 >= 0)
        {
            int num = (s2[c2] - '0');
            // result
            num += carry;
            if (num > 9)
            {
                carry = num / 10;
                addition += to_string(num % 10);
            }
            else
            {
                addition += to_string(num);
                carry = 0;
            }
            c2--;
        }
        if (carry != 0)
        {
            addition += to_string(carry);
            carry = 0;
        }

        while (c1 >= 0)
        {
            addition += s1[c1];
            c1--;
        }
        while (c2 >= 0)
        {
            addition += s2[c2];
            c2--;
        }
        reverse(addition.begin(), addition.end());
        BIGINTEGER n(addition);
        return n;
    }
    BIGINTEGER multiply(BIGINTEGER x)
    {
        string str_res;
        string str1 = n;
        string str2 = x.n;
        int carry = 0;
        // cout << "Status: str_res=str1=str2=carry= " << str_res << "\t" << str1 << "\t" << str2 << "\t" << carry << endl;
        getch();
        vector<BIGINTEGER> arr(str2.length());
        int count = 0;

        //////////////////////////

        for (int i = 0; i < str2.length(); i++)
        {
            int b = str2.length() - i - 1;
            for (int m = 0; m < b; m++)
            {
                // cout << "Status:  m=" << m << endl;
                getch();
                arr[count].n += "0";
            }
            // cout << "Status: b= " << b << endl;
            getch();
            for (int j = str1.length() - 1; j >= 0; j--)
            {
                /////////////////////////////
                int num1 = str1[j] - '0';
                int num2 = str2[i] - '0';
                int r = carry + (num1 * num2);
                if (r > 9)
                {
                    getch();
                    carry = r / 10;
                    r = r % 10;
                    // cout << "Status: num1=num2=r=carry= " << num1 << "\t" << num2 << "\t" << r << "\t" << carry << "\t" << endl;
                }
                else
                {
                    getch();
                    carry = 0;
                    // cout << "Status: num1=num2=r=carry=" << num1 << "\t" << num2 << "\t" << r << "\t" << carry << "\t" << endl;
                }
                arr[count].n += to_string(r);
            }
            count++;
            getch();
            reverse(arr[count].n.begin(), arr[count].n.end());
            carry = 0;
            cout << "status :count=" << count << endl;
        }

        /////////////////////////

        BIGINTEGER res("0");
        for (int i = 0; i < arr.size(); i++)
        {
            cout << "Hello world" << endl;
            res = res.add(arr[i]);
        }
        return res;
    }
};

int main()
{
    string s1;
    string s;
    cout << "entr:" << endl;
    cin >> s >> s1;
    BIGINTEGER n(s);
    BIGINTEGER x(s1);
    n.multiply(x).print();
    // cout << to_string(0);
    return 0;
}

// string str_res;
//         int carry = 0;
//         int count1 = n.length() - 1;
//         int count2 = str.length() - 1;

//         while ((count1 >= 0) && (count2 >= 0))
//         {
//             int num_n = (int)n[count1] - 48;
//             int num_str = (int)str[count2] - 48;
//             // cout << "Num:" << num_n << " N2 :" << num_str << endl;
//             carry = (num_n + num_str + carry) / 10;
//             // cout << "carry" << carry << endl;
//             //Something went wrong...
//             if ((num_n + num_str + carry) <= 9)
//             {
//                 // char c = (char)(num_n + num_str + carry + 48);
//                 string d = to_string((num_n + num_str + carry));
//                 str_res += d;
//                 cout << "H" << d << endl;
//             }

//             else
//             {
//                 // char c = (char)(((num_n + num_str + carry) % 10) + 48);
//                 string d = to_string(((num_n + num_str + carry) % 10));
//                 str_res += d;
//                 cout << "N" << d << endl;
//                 // carry = 0;
//             }
//             //Something went wrong...
//             // if (count1 == 8)
//             cout << "Str:" << str_res << endl;
//             cout << "c1:" << count1 << endl
//                  << "c2:" << count2 << endl;
//             cout << "Carry: " << carry << endl;
//             count1--;
//             count2--;
//             // cout << str_res << endl;
//         }
//         if (count1 >= 0)
//             while (count1 >= 0)
//             {
//                 str_res += n[count1];
//                 count1--;
//             }
//         // cout << str_res << endl;
//         if (count2 >= 0)
//             while (count2 >= 0)
//             {
//                 str_res += str[count2];
//                 count2--;
//             }
//         reverse(str_res.begin(), str_res.end());

//         // cout << str_res << endl;
//         BIGINTEGER res(str_res);
//         return res;
//         // // return str_res;