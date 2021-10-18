#include <iostream>
#include <list>
#include <vector>
using namespace std;
const int hash_modulo = 10;
vector<list<int>> arr(hash_modulo);
void insert(int element)
{
    int index = (element % hash_modulo);
    arr[index].push_back(element);
    cout << "insertion successful;" << endl;
}
void insert()
{
    int n;

    cout << "enter the element: ";
    cin >> n;
    insert(n);
}
int search(int element)
{
    int index = element % 10;
    cout << "Searching...;" << endl;
    for (auto i = arr[index].begin(); i != arr[index].end(); i++)
    {
        if ((*i) == element)
        {
            return 1;
        }
    }
    // if (arr[index] == element)
    // {
    //     return index;
    // }
    // return -1;
    return -1;
}
void search()
{
    int n;
    int res = -1;
    cout << "enter the element : ";
    cin >> n;
    res = search(n);
    if (res == 1)
    {
        cout << "The element found" << endl;
        return;
    }
    cout << "The element does not exist" << endl;
}
void print()
{
    int count = 0;
    for (auto i = arr.begin(); i != arr.end(); i++, count++)
    {
        for (auto j = arr[count].begin(); j != arr[count].end(); j++)
        {
            cout << (*j) << " ";
        }
    }
    cout << endl;
}
int main()
{
    int n;
    while (true)
    {
        cin >> n;
        switch (n)
        {
        case 1:
            insert(); // working well
            break;
        case 2:
            search(); // working well
            break;
        case 3:
            print(); // working well
            break;
        case 210:
            return 0;
        default:
            cout << "Invalid" << endl;
            break;
        }
    }
    return 0;
}