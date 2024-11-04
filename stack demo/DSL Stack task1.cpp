#include <iostream>
#include <stack>

using namespace std;

void reverseArray(int* arr, int size)
{
    stack<int> s;

    for (int i = 0; i < size; i++)
    {
        s.push(arr[i]);
    }

    for (int i = 0; i < size; i++)
    {
        arr[i] = s.top();
        s.pop();
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Original Array: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    reverseArray(arr, size);

    cout << "Reversed Array: ";

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
