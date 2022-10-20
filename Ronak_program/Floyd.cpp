// Floyd's algorithm to detect cyle in linked list
// c++ codecl

#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
	int data;
	Node *next;

	Node(int data)
	{
		this->data = data;
		next = NULL;
	}
};

Node *head = NULL;
class Linkedlist
{
public:
	void insert(int value)
	{
		Node *newNode = new Node(value);
		if (head == NULL)
			head = newNode;
		else
		{
			newNode->next = head;
			head = newNode;
		}
	}

	bool detectLoop()
	{
		Node *slowPointer = head,
			 *fastPointer = head;

		while (slowPointer != NULL && fastPointer != NULL && fastPointer->next != NULL)
		{
			slowPointer = slowPointer->next;
			fastPointer = fastPointer->next->next;
			if (slowPointer == fastPointer)
				return 1;
		}

		return 0;
	}
};

int main()
{
	// creating linked list
	Linkedlist l1;
	l1.insert(10);
	l1.insert(20);
	l1.insert(30);
	l1.insert(40);
	l1.insert(50);

	// creating loop in linked list
	Node *temp = head;
	while (temp->next != NULL)
		temp = temp->next;

	temp->next = head;

	// determining whether cycle is present or not
	if (l1.detectLoop())
		cout<<"Loop Found"<< endl;
	else
		cout<<"Loop does not exists"<< endl;

	return 0;
}
