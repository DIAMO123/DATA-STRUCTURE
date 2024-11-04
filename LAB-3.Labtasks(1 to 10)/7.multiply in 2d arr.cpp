#include<iostream>
using namespace std;
int main()
{
    int mat1[3][3];
    int mat2[3][3];
    int multi[3][3];
    int i,j;
    cout<<"Enter Elements of First Arrays Element: ";
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
            cin>>mat1[i][j];
    }
    cout<<"Enter Elements of Second Arrays Element: ";
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
            cin>>mat2[i][j];
    }

    cout<<endl<<"Multipling the Two Arrays..."<<endl;
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
            multi[i][j] = mat1[i][j]*mat2[i][j];
    }
    cout<<"Multiplication Result of The Arrays is: "<<endl;
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
            cout<<multi[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}
