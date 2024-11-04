#include<iostream>
using namespace std;
int main()
{
    int mat1[3][3];
    int mat2[3][3];
    int mat3[3][3];
    int addition[3][3];
    int i,j;
    cout<<"Enter Elements of First Matrix: ";
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
            cin>>mat1[i][j];
    }
    cout<<"Enter Elements of Second Matrix: ";
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
            cin>>mat2[i][j];
    }
    cout<<"Enter Elements of third Matrix: ";
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
            cin>>mat3[i][j];
    }
    cout<<endl<<"Adding the Two Given Matrix..."<<endl;
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
            addition[i][j] = mat1[i][j]+mat2[i][j]+mat3[i][j];
    }
    cout<<"Addition Result of Three Given Matrix is: "<<endl;
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
            cout<<addition[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}
