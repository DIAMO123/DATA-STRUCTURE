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
    int max = arr[0];

    for( i=0;i<n;i++)
    {
       if(max<arr[i])
       {
           max=arr[i];
       }

    }
    int max2 = arr[0];

    for( i=0;i<n;i++)
    {
       if(max2<arr[i])
       {
           if(arr[i]!=max)
           max2=arr[i];
       }

    }
    cout<<"the 2nd maximun element of the array is - "<<max2;


}


