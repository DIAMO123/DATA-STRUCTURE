#include <iostream>
using namespace std;

const int maxSize = 10;
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
            return -1; // Assuming -1 is not a valid element in the queue
        }

        return queue[front];
    }

    void showQueue() {
        if (isEmpty()==true) {
            cout << "Cannot show queue because it is empty." << endl;
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
      Queue q;

     q.showQueue();
     q.enqueue(1);
     q.showQueue();
     q.enqueue(2);
     q.enqueue(3);
     q.showQueue();
     q.dequeue();
     q.showQueue();

    cout << "Front element: " << q.frontElement() << endl;

    q.enqueue(4);
    q.showQueue();

    return 0;
}

