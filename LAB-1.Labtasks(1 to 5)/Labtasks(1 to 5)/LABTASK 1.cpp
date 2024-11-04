#include <iostream>

using namespace std;
int rvrs()
{
   int arr[5]={3,4,5,6,7};
   int sum=0;
   cout<<"the reverse is = ";
   for(int i=4;i>=0;i--)

   {
      cout<<arr[i];
      sum= sum+arr[i];
   }
   cout<<endl<<"average = "<<sum/5<<endl;


   int max =arr[0];
   for (int i=1;i<5;i++)
   {
       if (max<arr[i])
       {
            max =arr[i];
       }
   }
   cout<<"the maximum number is = "<<max<<endl;

   int min =arr[0];
   for (int i=1;i<5;i++)
   {
       if (min>arr[i])
       {
            min =arr[i];
       }
   }
   cout<<"the minimum number is = "<<min;
}




int main()
{


    rvrs();



}

