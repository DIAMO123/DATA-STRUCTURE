#include <iostream>
using namespace std;



//printing 1D array
void print2DArray(int** arr, int SIZE) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            cout << arr[i][j] << " ";
        }

    }
}
/*/reverse printing 1D array
reversePrint1DArray(int* arr, int SIZE)
{
    cout<<endl;
    for(int i=SIZE-1;i>=0;i--)
    {
        cout<<arr[i]<<" ";
    }
}
//taking input
input1DArray(int* arr, int SIZE)

{
     cout<<endl;
     for(int i=0;i<SIZE;i++)
    {
        cin>>arr[i];
    }
}
//searching in 1d array
searchIn1DArray(int* arr, int SIZE, int searchKey)
{
    int c=0;
    for(int i=0;i<SIZE;i++)
    {
       if(searchKey==arr[i])
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
findMax1DArray(int* arr, int SIZE)

{
    int max = arr[0];
     for(int i=0;i<SIZE;i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
        }
        else{max = arr[0];}
    }cout<<endl<<"the maximum element is - "<<max;
}
//finding the minimum number
findMin1DArray(int* arr, int SIZE)
{
    int min = arr[0];
     for(int i=0;i<SIZE;i++)
    {
        if(min>arr[i])
        {
            min=arr[i];
        }
        else{min = arr[0];}
    }cout<<endl<<"the minimum element is - "<<min<<endl;
}


//coping from sourcecode

void copy1DArray(int *sourceArray, int *destinationArray, int size) {
    for (int i = 0; i < size; i++)
        {
        destinationArray[i] = sourceArray[i];
        cout << destinationArray[i] << " ";

        }
}*/


int main() {
    int SIZE=9;
    int arr[SIZE]={1,2,3,4,5,6,7,8,9};
    int searchKey=7;
    int sourceArray[SIZE] = {1, 2, 3, 4, 5};
    int destinationArray[SIZE];





    print2DArray( **arr,SIZE);
    reversePrint1DArray(arr,SIZE);
    input1DArray(arr,  SIZE);
    searchIn1DArray( arr,  SIZE, searchKey);
    findMax1DArray(arr,  SIZE);
    findMin1DArray(arr, SIZE);
    copy1DArray(sourceArray, destinationArray, SIZE);




}

