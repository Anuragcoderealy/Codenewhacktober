#include<iostream>

using namespace std;

template <class T>
class Queue{
	T* queue;
	int size;
	int front, rear;
public:
	Queue(int s)
	{
		this->size = s;
		queue = new T[size];
		front = -1;
		rear = -1;
	}

	bool isFull()
	{
		return (front == (rear + 1) % size);
	}

	bool isEmpty()
	{
		return (front == -1 && rear == -1);
	}

	void enqueue( T element )
	{
		if( !isFull() )
		{
			rear = (rear + 1) % size;
			queue[rear] = element;
			if( front == -1 )
				front  = 0;
		}
	}

	T dequeue()
	{
		if( !isEmpty() )
		{
			int e = queue[front];
			if( front == rear )
			{
				front = -1;
				rear = -1;
			}
			else 
				front = (front+1) % size;
			return e;
		}
		return 0;
	}
};

int main()
{
	Queue<int> queue(10);

	queue.enqueue(23);
	queue.enqueue(39);
	queue.enqueue(38);
	queue.enqueue(30);
	queue.enqueue(15);
	queue.enqueue(2);

	cout << queue.dequeue() << ' ';
	cout << queue.dequeue() << ' ';
	cout << queue.dequeue() << ' ';
	cout << queue.dequeue() << ' ';
	cout << queue.dequeue() << ' ';

	queue.enqueue(22);
	queue.enqueue(22);
	queue.enqueue(21);
	queue.enqueue(22);
	queue.enqueue(23);
	queue.enqueue(225);
	queue.enqueue(25);
	queue.enqueue(26);

	
	cout << queue.dequeue() << ' ';
	cout << queue.dequeue() << ' ';
	cout << queue.dequeue() << ' ';
	cout << queue.dequeue() << ' ';
	cout << queue.dequeue() << ' ';
	cout << queue.dequeue() << ' ';
	cout << queue.dequeue() << ' ';
	cout << queue.dequeue() << ' ';
	cout << queue.dequeue() << ' ';

	return 0;
}