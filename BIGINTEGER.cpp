#include <iostream>
#include <list>
using namespace std;
class BIGINTEGER
{
private:
    list<int> n;

public:
    BIGINTEGER(list<int> n)
    {
        this->n = n;
    }
    BIGINTEGER(int x)
    {
        while (x)
        {
            n.push_front(x % 10);
            x /= 10;
        }
    }
    void print()
    {
        for (auto i = n.begin(); i != n.end(); i++)
        {
            cout << (*i) << "\t";
        }
        cout << endl;
    }
    BIGINTEGER add(BIGINTEGER &x)
    {
        list<int> result;
        auto iter1 = x.n.end();
        auto iter2 = this->n.end();
        int s1 = x.n.size();
        int s2 = n.size();
        int carry = 0;
        for (int i = 0; i < min(s1, s2); i++)
        {
            int res = (*iter1) + (*iter2) + carry;
            iter1--;
            iter2--;
            if (res > 9)
                carry = res / 10;
            else
                carry = 0;
            res = res % 10;
            result.push_front(res);
        }
        while (carry != 0 && iter1 != x.n.begin())
        {
            int res = *iter1 + carry;
            if (res > 9)
                carry = res / 10;
            else
                carry = 0;
            res = res % 10;
            result.push_front(res);
            iter1--;
        }
        while (carry != 0 && iter2 != n.begin())
        {
            int res = *iter2 + carry;
            if (res > 9)
                carry = res / 10;
            else
                carry = 0;
            res = res % 10;
            result.push_front(res);
            iter2--;
        }

        while (carry == 0 && iter1 != x.n.begin())
        {
            result.push_front(*iter1);
            iter1--;
        }
        while (carry == 0 && iter2 != n.begin())
        {
            result.push_front(*iter2);
            iter2--;
        }
        BIGINTEGER ans(result);
        return ans;
    }
};

int main()
{
    int x, y;
    cin >> x >> y;
    BIGINTEGER n(x), s(y);
    n.print();
    s.print();
    cout << "H" << endl;
    n.add(s).print();
    return 0;
}