//****Insert Link at head****
# include<iostream>
using namespace std;
class Node
{
public:
	int data;
	Node* next;//next is a pointer to a node structure, and indicates the next item in the list
	Node(int data)//creating constructor to fill data in node
	{
		this->data = data;
		this->next = NULL;
	}
};
void insertAtHead(Node* &head, int d)//here done by referance
{
	Node* temp = new Node(d);//creating a pointer temp of Node class and allocating dynamic memory and also creating Node with value d
	temp->next = head;//assigning temp's next to head of node1
	head = temp;//shifting head position from node1 to temp
}
void print(Node* &head)
{
	Node* sk = head;//here i have passed by referance and i dont want ot change value of head so i created another pointer of name "sk".
	while (sk != NULL)
	{
		cout <<sk->data << " ";//print temp data

		sk = sk->next;//moving sk position from temp to second node
	}
	cout << endl;
}
int main()
{
	Node* node1 = new Node(10);//creating pointer node1 of Node class and allocating dynamic memory to it and also create node with data 10
	Node* head = node1;//creating head pointer and pointing where node1 pointer is pointing

	insertAtHead(head, 12);// passing data of element which is to be inserted
	print(head);



	return 0;

}
