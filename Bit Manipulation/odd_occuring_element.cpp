#include<iostream>
#include<vector>
using namespace std;
//given an array arr which have all even occuring element excluding one. find that odd occuring element
class solution
{
public:
     int odd_occuring_element(vector<int> arr)
     {
         //write your code here
         int size=arr.size();
         // simple approach //-> O(n*n)
         for(int i=0;i<size;i++){
         int count=1;
             for(int j=0;j<size;j++){
                 if((arr[j]==arr[i])&& (j!=i)){
                     count++;
                 }
             }
             if(count%2!=0){
                 return arr[i];
             }
         }
         return -1;
         // efficient approach {using XOR} // -> O(n)
        //  int res=0;
        //  for(int i=0;i<size;i++){
        //      res=res^ arr[i];
        //  }
        //  return res;
     }
};
solution obj;
int main()
{
    vector<int> arr={1,6,2,3,3,5,5,6,1};
    cout<<obj.odd_occuring_element(arr);
    return 0;
}