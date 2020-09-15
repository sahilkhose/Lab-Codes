#include<iostream>
using namespace std;

#define STACK_SIZE 10
class Stack
{
	int s[10];
	int item;
	int top;
public:
	Stack();
	void push(int item);
	int pop();
	void display();
};

Stack::Stack()
{
	top = -1;
}

void Stack::push(int item)
{
	if(top == STACK_SIZE-1)
	{
		cout<<"Stack Overflow\n";
		return;
	}
	s[++top] = item;
}

int Stack::pop()
{
	if(top == -1)
	{
		cout<<"Empty Stack\n";
		return -1;
	}
	return s[top--];
}

void Stack::display()
{
	int i;
	if(top==-1)
	{
		cout<<"Empty Stack\n";
		return;
	}
	cout<<"Contents of Stack:\n";
	for(i=0; i<=top; i++)
		cout<<s[i]<<" ";
	cout<<endl;
}