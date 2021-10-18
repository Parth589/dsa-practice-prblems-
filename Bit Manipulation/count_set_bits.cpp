#include<iostream>
using namespace std;
class solution
{
    int arr[256];
public:
    solution(){
        for(int i=0;i<256;i++){
            // arr[i]=+
        }
    }
     int count_set_bits(int n)
     {
         //write your code here
         //neive approach : -> traverse all bits and check -> O(all bits in n)
        //  int res=0;
        //  while(n){
        //      if(n&1==1){
        //          res++;
        //      }
        //      n=n>>1;
        //  }
        //  return res;

         // efficient approach : -> using brian's algorithm -> theta(all set bits in n)
        //  int res=0;
        // while(n){
        //     res++;
        //     n=n&(n-1);
        // }
        // return res;

        // efficient approach : -> using pre computation

     }
};
solution obj;
int main()
{
    cout<<obj.count_set_bits(5);
    return 0;
}