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
    for( i=0;i<n;i++)
    {
       sum=sum+arr[i];
    }
    float avg=sum/n;
    cout<<"the avarage of the array is - "<<avg;


}
