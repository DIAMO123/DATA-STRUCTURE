#include <iostream>

using namespace std;
int main()
{
    int n;
    cout<<"Declar the size of the array - ";
    cin>>n;
    cout<<"enter the numbers - "<<endl;
    int arr[n];
    for( int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=n-1;i>=0;i--)
    {
       cout<<"the reversed number is - "<<arr[i];
    }
}
