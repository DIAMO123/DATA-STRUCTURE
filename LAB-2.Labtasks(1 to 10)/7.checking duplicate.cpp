#include <iostream>
using namespace std;
int main()
{
    int n,i,c=0;
    cout<<"Declar the size of the array - ";
    cin>>n;
    cout<<"enter the numbers - "<<endl;
    int arr[n];
    for( i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int x = arr[0];

    for( i=0;i<n;i++)
    {
       if(x==arr[i])
       {
           c++;
       }

    }
    if(c>1)
    {
        cout<<"yes";
    }
    else
        {
          cout<<"no";
        }



}


