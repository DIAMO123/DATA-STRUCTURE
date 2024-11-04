#include <iostream>
using namespace std;
int main()
{
    cout<<"enter the row  number of the array - ";
    int a,b,avg=0;

    cin>>a;
    cout<<"enter the  culumn number of the array - ";
    cin>>b;
    int arr[a][b],sum=0;
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
    for(int i=0;i<a;i++)
    {

       for(int j=0;j<b;j++)
        {
            sum=sum + arr[i][j];
            avg = sum/(a*b);

        }
    }

    cout<<endl<<"the average of the array is - "<<avg;


}

