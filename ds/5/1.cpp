// 1. Write a program to implement the circular queue using arrays.
// Implementation of Circular Queue with counter:

#include<iostream>
using namespace std;

#define QUEUE_SIZE 5

class Queue
{
	int front, rear, counter;
	int q[QUEUE_SIZE];
public:
	Queue();
	void insert(int item);
	int del();
	void display();
};


Queue::Queue()
{
	counter = 0;
	front = -1; // latest deleted
	rear = -1; // latest added
}

void Queue::insert(int item)
{
	if(counter == QUEUE_SIZE)
	{
		cout<<"Queue Overflow"<<endl;
		return;
	}
	rear = (rear + 1) % QUEUE_SIZE;
	counter++;
	q[rear] = item;
}

int Queue::del()
{
	if(counter == 0)
		return -999;
	front = (front + 1) % QUEUE_SIZE;
	counter--;
	return q[front];
}

void Queue::display()
{
	int i;
	if(counter == 0)
	{
		cout<<"Empty queue"<<endl;
		return;
	}
	cout<<"Contents:"<<endl;
	int j=0;
	for(i=(front+1)%QUEUE_SIZE; j<counter; i=(i+1)%QUEUE_SIZE, j++)
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
    q.insert(123);
    q.insert(13223);
    q.display();
	return 0;
}