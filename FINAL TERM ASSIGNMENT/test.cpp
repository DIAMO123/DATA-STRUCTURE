#include<bits/stdc++.h>
#include "mySTL .h"
using namespace std;


int main()
{

    cout<<"Linked List"<<endl<<"*****************"<<endl;
    LinkedList<int>l;
    l.insertAtFirst(30);
    l.insertAtFirst(20);
    l.insertAtFirst(10);
    l.insertAtLast(40);
    l.insertAtLast(50);
    l.insertAtLast(60);
    l.insertAtAnyPos(25, 3);
    l.insertBeforeElement(15, 20);
    l.insertBeforeElement(35, 40);
    l.insertBeforeElement(42, 45);
    l.deleteElementByValue(30);
    l.display();
    l.getFirstElement();
    l.getLastElement();
    l.deleteAtFirst();
    l.deleteAtLast();
    l.display();






    cout<<endl<<endl<<"STACK"<<endl<<"*******"<<endl;
    Stack<int>s;
    s.push(100);
    s.push(200);
    s.push(300);
    s.push(400);
    s.push(500);
    s.push(600);
    s.pop();
    s.pop();
    s.top();


    cout<<endl<<endl<<"QUEUE"<<endl<<"******"<<endl;
    Queue<int>q;
    q.enQueue(1000);
    q.enQueue(2000);
    q.enQueue(3000);
    q.enQueue(4000);
    q.enQueue(5000);
    q.enQueue(6000);
    q.display();
    q.deQueue();
    q.deQueue();
    q.display();
    q.front();
    q.rear();


    cout<<endl<<endl<<"Binary Search Tree"<<endl<<"*******************"<<endl;
    BST<int>bst;
    bst.insertIntoBST(10);
    bst.insertIntoBST(8);
    bst.insertIntoBST(9);
    bst.insertIntoBST(5);
    bst.insertIntoBST(12);
    bst.insertIntoBST(11);
    bst.insertIntoBST(15);
    bst.preorder();
    bst.postorder();
    bst.inorder();
    bst.searchInBST(10);


    return 0;
}

