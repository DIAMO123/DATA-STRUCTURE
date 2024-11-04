#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cout<<"enter array size - ";
    cin>>a;
    cout<<"enter the number you want to input - ";
    cin>>b;

    int arr[a];
    for(int i=0;i<b;i++)
    {
        cin>>arr[i];
    }

    int poss,num;


    cout<<"enter poss - ";
    cin>>poss;
cout<<"enter numbr - ";
    cin>>num;

    for(int i=b;i>poss-1;i--)
    {
        arr[i]=arr[i-1];

    }
        arr[poss-1]=num;b++;

    for(int i=0;i<10;i++)
    {
        cout<<arr[i]<<" ";
    }
    int r;
    cout<<endl<<"delet number position -  ";
    cin>>r;
     for(int i=r-1;i<b;i++)
    {
        arr[i]=arr[i+1];

    }
        b--;

    for(int i=0;i<10;i++)
    {
        cout<<arr[i]<<" ";
    }
}
