#include <iostream>
using namespace std;

const int maxSize = 50;
class Queue {
public:

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

    void enqueueOperation(int element) {
        if (isFull()==true) {
            cout << "QUEUE IS FULL!" << endl;
            return;
        }

        if (isEmpty()==true)
            {
            front = rear = 0;
            }
        else {
               rear++;
             }

        queue[rear] = element;
    }

    void dequeueOperation() {
        if (isEmpty()==true) {
            cout << " Queue is empty! Dequeue not possible" << endl;
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
            cout << "Queue is empty!" << endl;
            return -1;
        }

        return queue[front];
    }

    void showQueue() {
        if (isEmpty()==true) {
            cout << "QUEUE IS EMPTY" << endl;
            return;
        }
        cout<<"The current elements are : ";
        for (int i = front; i <= rear; i++) {
            cout << queue[i] << " ";
        }
        cout << endl;
    }
};

int main() {
      Queue obj;

     obj.showQueue();
     obj.enqueueOperation(1);
     obj.showQueue();
     obj.enqueueOperation(2);
     obj.enqueueOperation(3);
     obj.showQueue();
     obj.dequeueOperation();
     obj.showQueue();

    cout << "Front element: " << obj.frontElement() << endl;

    obj.enqueueOperation(4);
    obj.showQueue();

    return 0;
}

