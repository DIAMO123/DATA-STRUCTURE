#include <iostream>
using namespace std;

void print2DArray(int **array, int size) {
    int row = size;
    int col = size;
    cout << "Printing the 2D Array : \n";
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << array[i][j] << " ";
        }
        cout << "\n";
    }
    cout << "\n";
}

int main() {
    int size2D;

    cout << "Enter the 2D Array size n (where n x n): ";
    cin >> size2D;
    int **array = new int *[size2D];

    for (int i = 0; i < size2D; i++) {
        array[i] = new int[size2D];
        for (int j = 0; j < size2D; j++) {
            array[i][j] = i * size2D + j + 1; // Initialize the elements (1 to size2D^2)
        }
    }

    print2DArray(array, size2D);

    // Deallocate the memory
    for (int i = 0; i < size2D; i++) {
        delete[] array[i];
    }
    delete[] array;

    return 0;
}
