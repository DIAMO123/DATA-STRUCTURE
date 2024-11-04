#include <iostream>
using namespace std;

const int maxSize = 10;


int queue[maxSize];
int front=-1, rear=-1;




bool isEmpty() {
        if(front == -1 && rear == -1)
        {
             return true ;
        }return false;

    }

    bool isFull() {
        if(rear == (maxSize - 1))
        {
             return true;
        }return false;

    }

    void enqueue(int x) {
        if (isFull()==true) {
            cout << "Error: Queue full!" << endl;
            return;
        }

        if (isEmpty()==true)
            {
            front = rear = 0;
            }
        else {
               rear++;
             }

        queue[rear] = x;
    }

    void dequeue() {
        if (isEmpty()==true) {
            cout << "Error: Queue is empty! Dequeue not possible." << endl;
            return;
        }

        if (front == rear) {
            front = rear = -1;
        } else {
            front++;
        }
    }

    int frontElement() {
        if (isEmpty()==true) {
            cout << "Error: Queue is empty!" << endl;
            return -1;
        }

        return queue[front];
    }

    void showQueue() {
        if (isEmpty()==true) {
            cout << "Cannot show queue because it is empty." << endl;
            return;
        }
        cout<< "The current elements are : ";

        for (int i = front; i <= rear; i++) {
            cout <<queue[i] << " ";
        }
        cout << endl;
    }


int main() {

    showQueue();
    enqueue(1);
    showQueue();
    enqueue(2);
    enqueue(3);
    showQueue();
    dequeue();
    showQueue();

    cout << "Front element: " << frontElement() << endl;

    enqueue(4);
    showQueue();

    return 0;
}


