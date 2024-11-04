#include <iostream>
using namespace std;
int main()
{   int c,r;
    cout<<"enter the row number of your 2d array - ";
    cin>>r;
    cout<<"enter the column number of your 2d array - ";
    cin>>c;



    int arr[r][c];
    for(int i =0;i<r;i++)
    {   cout<<endl;
        for(int j=0;j<c;j++)
        {
            cin>>arr[i][j];
        }
    }
    if(c==r)
    {
        cout<<"TI'S A SQUARE ARRAY"<<endl;
    }
    else{ cout<<"TI'S NOT A SQUARE ARRAY"<<endl;}

    cout<<"THE ARRAY ELEMENTS ARE : "<<endl;

    for(int i =0;i<r;i++)
    {   cout<<endl;
        for(int j=0;j<c;j++)
        {
            cout<<arr[i][j];
        }
    }




}

