#include <iostream>
#include <string.h>
#include <cmath>
using namespace std;

void seive(int n)
{
  bool array[n + 1];
  //create an array of size n+1
  //start from 2
  memset(array, true, n + 1);
  for (int i = 2; i <= n; i++)
  {
    if (array[i])
    {
      for (int j = i * i; j <= n; j = j + i)
      {
        array[j] = false;
          }}
  }
  // print the element which are true
  for (int i = 2; i <= n; i++)
  {
    if (array[i] == true)
    {
      cout << i << " ";
    }
  }
  cout << endl;
}
int main()
{
  seive(25);
    return 0;
}
