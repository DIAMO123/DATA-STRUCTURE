#include<bits/stdc++.h>
using namespace std;


// Singly Linked List
template<typename DType>
class LinkedListSTL
{
    private:
        class Node
        {
            public:
                DType data;
                Node* next;

                Node()
                {

                }

                Node(DType data)
                {
                    this->data = data;
                    this->next = NULL;
                }
        };

        typedef Node* NodePointer;

        NodePointer head = NULL;
        NodePointer curr = NULL;


        NodePointer createNode(DType data)
        {
            return new Node(data);
        }

    public:

        void insertAtFirst(DType data)
        {
            if(head == NULL)
            {
                head = createNode(data);
                curr = head;
            }

            else
            {
                NodePointer newNode = createNode(data);
                newNode->next = head;
                head = newNode;
            }
        }

        void insertAtLast(DType data)
        {
            if(head == NULL)
            {
                insertAtFirst(data);
            }
            else
            {
                curr->next = createNode(data);
                curr = curr->next;
            }
        }



        void insertAtAnyPos(DType data, int pos)
        {
            NodePointer newNode = createNode(data);

            if(pos == 1)
            {
                newNode->next = head;
                head = newNode;
            }

            else
            {
                NodePointer temp = head;
                for(int i = 1; i<pos-1 && temp != NULL; i++)
                {
                    temp = temp->next;
                }

                if (temp != NULL)
                {
                    newNode->next = temp->next;
                    temp->next = newNode;
                }

                else
                {
                    cout<<data<<" is invalid position."<<endl;
                }
            }
        }



        void insertBeforeElement(DType data, DType element)
        {

            if(head == NULL)
            {
                cout<<"List is empty."<<endl;
            }


            else if(head->data == element)
            {
                NodePointer newNode = createNode(data);
                newNode->next = head;
                head = newNode;
                cout<<data<<" is inserted before "<<element<<endl;
            }

            else
            {
                NodePointer temp = head;

                while(temp->next != NULL && temp->next->data != element)
                {
                    temp = temp->next;
                }

                if (temp->next != NULL)
                {
                    NodePointer newNode = createNode(data);
                    newNode->next = temp->next;
                    temp->next = newNode;
                    cout<<data<<" is inserted before "<<element<<endl;
                }

                else
                {
                    cout<<element<<" is not found so "<<data<<" is not insert"<<endl;
                }

            }
        }



        void deleteAtFirst()
        {
            if(head == NULL)
            {
                cout<<"List is empty"<<endl;
            }

            else
            {
                NodePointer temp = head;
                head = head->next;
                delete temp;
            }
        }


        void deleteAtLast()
        {
            if(head == NULL)
            {
                return ;
            }

            else if(head->next == NULL)
            {
                delete head;
            }


            else
            {
                NodePointer temp = head;
                if(temp->next!=NULL)
                {
                    while(temp->next->next != NULL)
                    {
                        temp=temp->next;
                    }

                    curr = temp;
                    delete temp->next ;
                    temp->next = NULL;

                }
            }
        }

        void deleteElementByValue(DType element)
        {
            if(head == NULL)
            {
                return ;
            }

            else if(head->data == element)
            {
                NodePointer temp = head;
                head = head->next;
                delete temp;
            }

            else
            {
                NodePointer temp = head;
                while(temp->next != NULL && temp->next->data != element)
                {
                    temp = temp->next;
                }

                if(temp->next != NULL)
                {
                    NodePointer value = temp->next;
                    temp->next = value->next;
                    delete value;
                    cout<<element<<" is deleted."<<endl;
                }

                else
                {
                    cout<<element<<" is not found in the list."<<endl;
                }
            }
        }


        DType getFirstElement()
        {
            if(head == NULL)
            {

                return NULL;
            }

            else
            {
                return head->data;

            }
        }




        DType getLastElement()
        {
            if(head == NULL)
            {

                return NULL;
            }

            else
            {
                NodePointer temp = head;
                while(temp->next != NULL)
                {
                    temp = temp->next;
                }
                return temp->data;
            }
        }



        void display()
        {
            NodePointer temp = head;

            while(temp !=NULL)
            {
                cout<<temp->data<<" ";
                temp = temp->next;
            }
            cout<<endl;
        }
};

// Singly Linked List
template<typename DType>
class LinkedList
{
    private:
        LinkedListSTL<DType>myLinkedList;

    public:
        void insertAtFirst(DType data)
        {
            myLinkedList.insertAtFirst(data);
            cout<<data<<" is inserted at first"<<endl;
        }


        void insertAtLast(DType data)
        {
            myLinkedList.insertAtLast(data);
            cout<<data<<" is inserted at last"<<endl;
        }



        void insertAtAnyPos(DType data, int pos)
        {
            myLinkedList.insertAtAnyPos(data, pos);
            cout<<data<<" is inserted at position in "<<pos<<endl;
        }



        void insertBeforeElement(DType data, DType element)
        {
            myLinkedList.insertBeforeElement(data, element);
        }

        void deleteElementByValue(DType element)
        {
            myLinkedList.deleteElementByValue(element);
        }



        void deleteAtFirst()
        {
            cout<<"Delete at first and data is "<<myLinkedList.getFirstElement()<<endl;
            myLinkedList.deleteAtFirst();
        }


        void deleteAtLast()
        {
            cout<<"Delete at last and data is "<<myLinkedList.getLastElement()<<endl;
            myLinkedList.deleteAtLast();

        }


        DType getFirstElement()
        {
            if(myLinkedList.getFirstElement() == NULL)
            {
                cout<<"List IS EMPTY"<<endl;
            }

            else
            {
                cout<<"First Element: "<<myLinkedList.getFirstElement()<<endl;
            }
        }



        DType getLastElement()
        {
            if(myLinkedList.getLastElement() == NULL)
            {
                cout<<"List IS EMPTY"<<endl;
            }

            else
            {
                cout<<"Last Element: "<<myLinkedList.getLastElement()<<endl;
            }
        }


        void display()
        {
            cout<<"List: ";
            myLinkedList.display();
            cout<<endl;
        }



};





// Stack
template<typename DType>
class Stack
{
    private:
        LinkedListSTL<DType>myStackList;

    public:
        Stack()
        {

        }

        void push(DType data)
        {
            cout<<data<<" is push"<<endl;
            myStackList.insertAtLast(data);
        }

        void pop()
        {
             if(myStackList.getLastElement() == NULL)
            {
                cout<<"STACK IS UNDERFLOW"<<endl;
            }

            else
            {
                cout<<myStackList.getLastElement()<<" is popped"<<endl;
                myStackList.deleteAtLast();
            }
        }

        DType top()
        {
            if(myStackList.getLastElement() == NULL)
            {
                cout<<"STACK IS EMPTY"<<endl;
            }

            else
            {
                cout<<"Top: "<<myStackList.getLastElement()<<endl;
            }
        }


};


// Queue
template<typename DType>
class Queue
{
    private:
        LinkedListSTL<DType>myQueue;

    public:
        Queue()
        {

        }

        void enQueue(DType data)
        {
            cout<<data<<" is enqueue"<<endl;
            myQueue.insertAtLast(data);
        }

        void deQueue()
        {
            if(myQueue.getFirstElement() == NULL)
            {
                cout<<"Queue is empty"<<endl;
            }
            else
            {
                cout<<myQueue.getFirstElement()<<" is dequeue"<<endl;
                myQueue.deleteAtFirst();
            }
        }

        DType front()
        {
            if(myQueue.getFirstElement() == NULL)
            {
                cout<<"Queue is empty"<<endl;
            }
            else
            {
                cout<<"Front: "<<myQueue.getFirstElement()<<endl;
            }
        }


        DType rear()
        {
            if(myQueue.getLastElement() == NULL)
            {
                cout<<"Queue is empty"<<endl;
            }
            else
            {
                cout<<"Rear: "<<myQueue.getLastElement()<<endl;
            }
        }


        void display()
        {
            cout<<"Queue List: ";
            myQueue.display();
        }
};


// Binary Search Tree
template<typename DType>
class BST
{
    private:
        class treeNode
        {
            public:
                DType data;
                treeNode *left, *right;

                treeNode(DType data)
                {
                    this->data = data;
                    left = NULL;
                    right = NULL;
                    cout<<data<<" is inserted"<<endl;
                }
        };

    typedef treeNode* nodeBST;


    nodeBST createNewNode(DType data)
    {
        return new treeNode(data);
    }


    nodeBST insertIntoBST(nodeBST ptr,DType value)
    {
        if(ptr == NULL)
        {
            return createNewNode(value);
        }

        else if(value<ptr->data)
        {
            ptr->left = insertIntoBST(ptr->left, value);
        }

        else if(value>ptr->data)
        {
            ptr->right = insertIntoBST(ptr->right, value);
        }

        return ptr;
    }

    DType searchInBST(nodeBST ptr, DType searchElement)
    {
        if(ptr == NULL)
        {
            return NULL;
        }

        else if(ptr != NULL)
        {
            if(ptr->data == searchElement)
            {
                return ptr->data;
            }

            else if(searchElement<ptr->data)
            {
                 return searchInBST(ptr->left, searchElement);
            }

            else if(searchElement>ptr->data)
            {
                return searchInBST(ptr->right, searchElement);
            }

            else
            {
                return NULL;
            }

        }


    }

    nodeBST findMin(nodeBST ptr)
    {
        while(ptr->left != NULL)
        {
            ptr = ptr->left;
        }

        return ptr;
    }

    nodeBST findMax(nodeBST ptr)
    {
        while(ptr->right != NULL)
        {
            ptr = ptr->right;
        }

        return ptr;
    }

    void inorder(nodeBST ptr)
    {
        if(ptr != NULL)
        {
            inorder(ptr->left);
            cout<<ptr->data<<" ";
            inorder(ptr->right);
        }

        return ;
    }


    void preorder(nodeBST ptr)
    {
        if(ptr != NULL)
        {
            cout<<ptr->data<<" ";
            preorder(ptr->left);
            preorder(ptr->right);
        }
    }

    void postorder(nodeBST ptr)
    {
        if(ptr != NULL)
        {
            preorder(ptr->left);
            preorder(ptr->right);
            cout<<ptr->data<<" ";
        }
    }


    nodeBST deleteFromBST(nodeBST ptr, DType value)
    {
        if(ptr == NULL)
        {
            return ptr;
        }

        if(value<ptr->data)
        {
            ptr->left = deleteFromBST(ptr->left, value);
        }

        else if(value>ptr->data)
        {
            ptr->right = deleteFromBST(ptr->right, value);
        }

        else
        {
            // No child
            if(ptr->left == NULL && ptr->right == NULL)
            {
                cout<<ptr->data<<" is deleted"<<endl;
                delete ptr;
                ptr = NULL;
            }

            // One child
            else if(ptr->left == NULL)
            {
                nodeBST temp = ptr;
                ptr = ptr->right;
                cout<<temp->data<<" is deleted"<<endl;
                delete temp;
            }

            else if(ptr->right == NULL)
            {
                nodeBST temp = ptr;
                ptr = ptr->left;
                cout<<temp->data<<" is deleted"<<endl;
                delete temp;
            }

            // Two child
            else
            {
                nodeBST temp = findMax(ptr->left);
                ptr->data = temp->data;
                ptr->left = deleteFromBST(ptr->left, temp->data);
            }
        }
        return ptr;
    }


    public:
        nodeBST root = NULL;

        void insertIntoBST(DType value)
        {
            root = insertIntoBST(root, value);
        }

        DType searchInBST(DType searchElement)
        {
            DType searchResult = searchInBST(root, searchElement);

            if(searchResult == NULL)
            {
                cout<<searchElement<<" is not found"<<endl;
            }

            else if(searchResult == searchElement)
            {
                cout<<searchElement<<" is found"<<endl;
            }
        }

        void inorder()
        {
            cout<<"In-order:  ";
            inorder(root);
            cout<<endl;
        }

        void preorder()
        {
            cout<<"Pre-order:  ";
            preorder(root);
            cout<<endl;
        }

        void postorder()
        {
            cout<<"Post-order:  ";
            postorder(root);
            cout<<endl;
        }


};

