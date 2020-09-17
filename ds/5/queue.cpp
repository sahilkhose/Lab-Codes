// Implementation of Linear Queue:

#include<iostream>
using namespace std;

#define QUEUE_SIZE 5

class Queue
{
	int front, rear;
	int q[QUEUE_SIZE];
public:
	Queue();
	void insert(int item);
	int del();
	void display();
};


Queue::Queue()
{
	front = -1; // latest deleted
	rear = -1; // latest added
}

void Queue::insert(int item)
{
	if(rear == QUEUE_SIZE - 1)
	{
		cout<<"Queue Overflow"<<endl;
		return;
	}
	q[++rear] = item;
}

int Queue::del()
{
	if(front==rear)
		return -1;
	return q[++front];
}

void Queue::display()
{
	int i;
	if(front==rear)
	{
		cout<<"Empty queue"<<endl;
		return;
	}
	cout<<"Contents:"<<endl;
	for(i=front+1; i<=rear; i++)
		cout<<q[i]<<" ";
	cout<<endl;
}





int main()
{
	Queue q;
    q.insert(5);
    q.insert(100);
    q.insert(13878);
    q.display();
    q.del();
    q.del();
    q.del();
    q.display();
    q.insert(120);
    q.insert(12100);
    q.insert(-1);
    q.insert(100);
    q.display();
	return 0;
}