#include<iostream>
using namespace std;

#define STACK_SIZE 10
class Stack
{
	char s[10];
	int item;
	int top;
public:
	Stack();
	void push(char item);
	char pop();
	char peek(int i);
	void display();
};
// IMPROVE THIS FUNCTION
char Stack::peek(int i)
{
	return s[i];
}

Stack::Stack()
{
	top = -1;
}

void Stack::push(char item)
{
	if(top == STACK_SIZE-1)
	{
		cout<<"Stack Overflow\n";
		return;
	}
	s[++top] = item;
}

char Stack::pop()
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