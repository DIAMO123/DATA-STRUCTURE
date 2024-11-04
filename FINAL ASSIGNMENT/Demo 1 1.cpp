#include <iostream>
#include "Array-helper.h"
using namespace std;

int main()
{
    int array1[] = {7, 1, 0, 14, 9};
    int destinationArray[5];
    print1DArray(array1, 5);
    reversePrint1DArray(array1, 5);
    // input1DArray(array1, 5);
    searchIn1DArray(array1, 5, 7);
    findMax1DArray(array1, 5);
    findMin1DArray(array1, 5);
    copy1DArray(array1, destinationArray, 5);
    print1DArray(destinationArray, 5);
    sort1DArray(array1, 5);
    cout << endl;

    int array2[][3] = {{9, 4, 8}, {3, 4, 5}, {8, 6, 4}};
    print2DArray(array2, 3, 3);
    reversePrint2DArray(array2, 3, 3);
    // input2DArray(array2, 3, 3);
    searchIn2DArray(array2, 3, 3, 2);
    findMax2DArray(array2, 3, 3);
    findMin2DArray(array2, 3, 3);
}
