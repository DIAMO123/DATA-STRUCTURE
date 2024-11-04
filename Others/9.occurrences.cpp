#include <iostream>
using namespace std;
int main()
{
    int n,i,j,a,c=0;


    cout<<"Declar the size of the array - ";
    cin>>n;
    cout<<"enter the numbers - "<<endl;
    int arr[n];
    for( i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=1;i<n;i++)
    {
        if(arr[i-1]==arr[i])
        {
            c++;
        }

    }

    if(c>0)
    {
        cout<<"yes,there is duplicate number";
    }
    else{cout<<"no,there is no duplicate number";}



}
