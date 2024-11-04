#include <iostream>
using namespace std;
int main()
{
    cout<<"enter the row  number of the array - ";
    int a,b,n=0;
    cin>>a;
    cout<<"enter the  culumn number of the array - ";
    cin>>b;
    int arr[a][b];
    cout<<"enter the elements of the array - ";
    for(int i=0;i<a;i++)
    {
       for(int j=0;j<b;j++)
        {
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<a;i++)
    {
        cout<<endl;
       for(int j=0;j<b;j++)
        {
            cout<<arr[i][j];
        }
    }
    for(int i = 0;i<=a;i++)
    {
        n=i;
    }
    cout<<endl<<"the row numbers are - "<<n;

}
