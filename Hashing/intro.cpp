#include <iostream>
using namespace std;
// hashing is a techinque where searching is very fast
int arr[10];
void insert(int element)
{
    int index = element % 10;
    arr[index] = element;
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
    if (arr[index] == element)
    {
        return index;
    }
    return -1;
}
void search()
{
    int n;
    int res = -1;
    cout << "enter the element : ";
    cin >> n;
    res = search(n);
    if (res == (-1))
    {
        cout << "The element does not exist" << endl;
        return;
    }
    cout << "The element is at index no. " << res << endl;
}
void print()
{
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << endl;
}
int main()
{
    //for inserting / searching an element using hash function. in this case the hash function will be x%10. which decides that which element will go into which index.
    int n;
    while (true)
    {
        cin >> n;
        switch (n)
        {
        case 1:
            insert();
            break;
        case 2:
            search();
            break;
        case 3:
            print();
            break;
        default:
            cout << "Invalid" << endl;
            break;
        }
    }

    return 0;
}