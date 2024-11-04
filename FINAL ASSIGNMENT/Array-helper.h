#include <iostream>
using namespace std;

void print1DArray(int *array, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << ' ';
    }

    cout << '\n';
}

void reversePrint1DArray(int *array, int size)
{
    for (int i = size - 1; i >= 0; i--)
    {
        cout << array[i] << ' ';
    }

    cout << '\n';
}

void input1DArray(int *array, int size)
{
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }

    for (int i = 0; i < size; i++)
    {
        cout << array[i] << ' ';
    }

    cout << '\n';
}

void searchIn1DArray(int *array, int size, int searchKey)
{
    int pos = -1;

    for (int i = 0; i < size; i++)
    {
        if (array[i] == searchKey)
        {
            pos = i + 1;
            break;
        }
    }

    if (pos != -1)
    {
        cout << "Element " << searchKey << "found at position: " << pos << '\n';
    }
    else
    {
        cout << "Element not found" << '\n';
    }
}

void findMax1DArray(int *array, int size)
{
    int max = array[0];

    for (int i = 1; i < size; i++)
    {
        if (max < array[i])
        {
            max = array[i];
        }
    }

    cout << "Max element is: " << max << '\n';
}

void findMin1DArray(int *array, int size)
{
    int min = array[0];

    for (int i = 1; i < size; i++)
    {
        if (min > array[i])
        {
            min = array[i];
        }
    }

    cout << "Max element is: " << min << '\n';
}

void copy1DArray(int *sourceArray, int *destinationArray, int size)
{
    for (int i = 0; i < size; i++)
    {
        destinationArray[i] = sourceArray[i];
    }
    print1DArray(destinationArray, size);
}

void swap(int *a, int *b)
{
    int temp = *b;
    *b = *a;
    *a = temp;
}

void sort1DArray(int *array, int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                swap(array[j], array[j + 1]);
            }
        }
    }

    print1DArray(array, size);
}

void print2DArray(int array[][3], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << array[i][j] << ' ';
        }
        cout << '\n';
    }
    cout << '\n';
}

void reversePrint2DArray(int array[][3], int row, int col)
{
    for (int i = row - 1; i >= 0; i--)
    {
        for (int j = col - 1; j >= 0; j--)
        {
            cout << array[i][j] << ' ';
        }
        cout << '\n';
    }
    cout << '\n';
}

void input2DArray(int array[][3], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> array[i][j];
        }
    }

    print2DArray(array, row, col);
}

void searchIn2DArray(int array[][3], int row, int col, int searchKey)
{
    int posR = -1;
    int posC = -1;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (array[i][j] == searchKey)
            {
                posR = i + 1;
                posC = j + 1;
                break;
            }
        }
    }

    if (posR != -1 && posC != -1)
    {
        cout << "Element found at position: (" << posR << ", " << posC << ")" << '\n';
    }
    else
    {
        cout << "Element not found" << '\n';
    }
}

void findMax2DArray(int array[][3], int row, int col)
{
    int max = -1;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (max < array[i][j])
            {
                max = array[i][j];
            }
        }
    }

    cout << "Max: " << max << '\n';
}

void findMin2DArray(int array[][3], int row, int col)
{
    int min = 999999999;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (min > array[i][j])
            {
                min = array[i][j];
            }
        }
    }

    cout << "Min: " << min << '\n';
}