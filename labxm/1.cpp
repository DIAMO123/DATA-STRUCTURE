#include <iostream>
using namespace std;
int main()
{
    int arr[8]={1,2,3,4,5,6,7,8};
    int max1=arr[0];
    for(int i=0;i<8;i++)
    {
       if(arr[i]>max1)
       {
           max1=arr[i];
       }
    }


      cout<<max1;

      int max2=arr[0];

    for(int i=0;i<8;i++)
    {
       if(arr[i]>max2)
       {
           max2=arr[i];
           if(max2<max1)
           {
               cout<<max2;
           }
       }
    }
    cout<<max2;



}
