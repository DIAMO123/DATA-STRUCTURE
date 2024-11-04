//Creating single Node
# include<iostream>
using namespace std;
class Node
{
public:
	int data;
	Node* next;
	Node(int data)//creating constructor to fill data in node
	{
		this->data = data;
		this->next = NULL;
	}
};


int main()
{
	Node* node1 = new Node(10);//creating object node1 of node class and allocating dynamic memory to it
	cout << node1->data << endl;//printing data
	cout << node1->next << endl;



	return 0;

}


