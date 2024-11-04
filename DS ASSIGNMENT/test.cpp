#include<iostream>
#include"arrayImplement.h"
using namespace std;



int main()
{
    int SIZE=5;
    int arr[SIZE]={1,2,3,4,5};
    int searchKey=7;
    int sourceArray[SIZE] = {1, 2, 3, 4, 5};
    int destinationArray[SIZE];


    print1Darray( arr,SIZE);
    reversePrint1DArray(arr,SIZE);
    input1DArray(arr,  SIZE);
    searchIn1DArray( arr,  SIZE, searchKey);
    findMax1DArray(arr,  SIZE);
    findMin1DArray(arr, SIZE);
    copy1DArray(sourceArray, destinationArray, SIZE);

}
