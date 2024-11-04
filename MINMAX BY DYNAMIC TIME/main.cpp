#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    int a,b;
    cout<<"enter row and column number"<<endl;
    cin>>a>>b;

    int arr[a][b];


   srand(time(0));


   for(int i=0;i<a;i++)
   {
       cout<<endl;

   for(int j=0;j<b;j++ )
   {
        arr[i][j]=rand()%10;
        cout<<arr[i][j]<<" ";


   }

   }
   int max = arr[0][0];
   int min = arr[0][0];

       for(int i=1;i<a;i++){

        for(int j=1;j<b;j++)
       {
           if(max<arr[i][j])
           {
              max=arr[i][j];
              cout<<endl<<max<<" "<<"maximum"<<endl;

           }

           if(min>arr[i][j])
           {
              min=arr[i][j];
             cout<<endl<<min<<" "<<"minimum"<<endl;

           }
       }
       }




}
