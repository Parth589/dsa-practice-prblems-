#include <iostream>
#include <time.h>
#include <conio.h>
using namespace std;
//function to play game
void play()
{
    srand(time(NULL));
    int random = rand() % 101;
    int n;
    while (true)
    {
        cout << "Enter a number in range of 1 to 100 :\t";
        cin >> n;
        if (n == 101)
        {
            return;
        }
        if (n > random)
        {
            cout << "Greater " << endl;
        }
        else if (n < random)
        {
            cout << "Lesser " << endl;
        }
        else
        {
            cout << "Found " << endl;
            break;
            // getch();
            // return;
        }
    }
}
int main()
{
    play();
    return 0;
}