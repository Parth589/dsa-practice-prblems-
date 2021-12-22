#include <iostream>
using namespace std;
void pettern1(int n)
{
    if (n == 0)
    {
        return;
    }

    pettern1(n - 1);
    for (int i = 1; i <= n; i++)
    {
        cout << i << " ";
    }
    cout << endl;
}
void pettern2(int n)
{
    if (n == 0)
    {
        return;
    }

    for (int i = 1; i <= n; i++)
    {
        cout << i << " ";
    }
    cout << endl;
    pettern2(n - 1);
}
void pt3(int n)
{
    if (n == 1)
    {
        cout << 1 << "\n";
        return;
    }
    for (int i = 0; i < n; i++)
    {
        cout << i + 1 << " ";
    }
    cout << endl;
    pt3(n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << i + 1 << " ";
    }
    cout << endl;
}
int main()
{
    pettern1(5);
    pettern2(5);
    cout << "pt3" << endl;
    pt3(5);
    return 0;
}