#include<iostream>
using namespace std;

//printing 1D array
void print1Darray(int* array,int SIZE)
{
    for(int i=0;i<SIZE;i++)
    {
        cout<<array[i]<<" ";
    }
}
//reverse printing 1D array
reversePrint1DArray(int* array, int SIZE)
{
    cout<<endl;
    for(int i=SIZE-1;i>=0;i--)
    {
        cout<<array[i]<<" ";
    }
}
//taking input
input1DArray(int* array, int SIZE)

{
     cout<<endl;
     for(int i=0;i<SIZE;i++)
    {
        cin>>array[i];
    }
}
//searching in 1d array
searchIn1DArray(int* array, int SIZE, int searchKey)
{
    int c=0;
    for(int i=0;i<SIZE;i++)
    {
       if(searchKey==array[i])
       {
          c++;
       }
       else{ c;}
    }
    if(c==0)
    {
        cout<<"not found";
    }
    else{cout<<" found";}
}
//finding the maximum number
findMax1DArray(int* array, int SIZE)

{
    int max = array[0];
     for(int i=0;i<SIZE;i++)
    {
        if(max<array[i])
        {
            max=array[i];
        }
        else{max = array[0];}
    }cout<<endl<<"the maximum element is - "<<max;
}
//finding the minimum number
findMin1DArray(int* array, int SIZE)
{
    int min = array[0];
     for(int i=0;i<SIZE;i++)
    {
        if(min>array[i])
        {
            min=array[i];
        }
        else{min = array[0];}
    }cout<<endl<<"the minimum element is - "<<min<<endl;
}


//coping from sourcecode

void copy1DArray(int *sourceArray, int *destinationArray, int size) {
    for (int i = 0; i < size; i++)
        {
        destinationArray[i] = sourceArray[i];
        cout << destinationArray[i] << " ";

        }
}
