#include <iostream>
using namespace std;
int main()
{
    int n,i,sum=0;
    cout<<"Declar the size of the array - ";
    cin>>n;
    cout<<"enter the numbers - "<<endl;
    int arr[n];
    for( i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int min = arr[0];

    for( i=0;i<n;i++)
    {
       if(arr[0]>arr[i])
       {
           min=arr[i];
       }

    }
    cout<<"the minimun element of the array is - "<<min;


}


