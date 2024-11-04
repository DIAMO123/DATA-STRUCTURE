#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    int a,b;
    cout<<"enter student number"<<endl;

    cin>>a;
    cout<<"enter course number"<<endl;
    cin>>b;

    int arr[a][b];
   for(int i=0;i<a;i++)
   {
       cout<<endl;

   for(int j=0;j<b;j++ )
   {

        cout<<arr[i][j]<<" ";

        cin>>arr[i][j];

   }


}

}
