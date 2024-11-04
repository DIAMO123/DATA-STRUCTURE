#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


void arra(int a)
{
    int arr[a];


   srand(time(0));

   for(int i=0;i<a;i++)
   {
       arr[i]=rand()%10;

       cout<<arr[i]<<endl;}
       int mx = arr[0];
       int mi = arr[0];
       for(int i=1;i<a;i++)
       {
           if(mx<arr[i])
           {
              mx=arr[i];
              cout<<mx<<" "<<"maximum"<<endl;


           }
           if(mi>arr[i])
           {
              mi=arr[i];
              cout<<mi<<" "<<"minimum"<<endl;


           }
       }return;



   }



int main()
{
   int a;
   cout<<"input the index number ";
   cin>>a;
   arra(a);



}
