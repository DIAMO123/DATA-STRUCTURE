
#include <iostream>
using namespace std;


int main()
{

    int n,i;
    int c=0;
    int flag =0;
    cout<<"Declar the size of the array - ";
    cin>>n;
    cout<<"enter the numbers - "<<endl;

    int arr[n];
    for( i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for( i=1;i<n;i++)
    {
        if(arr[i-1]<arr[i])
        {
            c++;
        }



    }

    if( c==n-1)
    {
        cout<<"yes";
    }
    else
    {
        cout<<"no";
    }










}
