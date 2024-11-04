
#include<iostream>
using namespace std;
int main()
{

    int arr[3*2];
    for(int i=0;i<3;i++)
    {
        cout<<endl;
        for(int j=0;j<2;j++)
        {
            cout<<"enter the elements"<<endl;
            cin>>arr[2*i+j];
        }
    }
    for(int i=0;i<3;i++)
    {
        cout<<endl;
        for(int j=0;j<2;j++)
        {
            cout<<arr[2*i+j]<<" ";
        }
    }
}

