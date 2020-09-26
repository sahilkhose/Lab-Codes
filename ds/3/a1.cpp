// 1. Write a program to implement Multiple stack using arrays.

#include<iostream>
using namespace std;

#define STACK_SIZE 30
#define N_STACKS 3
class Stack
{
	int s[STACK_SIZE];
	int top[N_STACKS];
	int bottom[N_STACKS];
public:
	Stack();
	void push(int item, int i);
	int pop(int i);
	void display(int i);
	int topele(int i);
};

Stack::Stack()
{
	for(int i=0; i<N_STACKS; i++)
		top[i] = bottom[i] = i*(STACK_SIZE/N_STACKS) - 1; // {-1, 9, 19}
}

void Stack::push(int item, int i)
{
	if(top[i] == bottom[i+1] || top[i] == STACK_SIZE-1)
		cout<<"Stack "<<i<<" Overflow"<<endl;
	else
		s[++top[i]] = item;
}

int Stack::pop(int i)
{
	if(top[i] == bottom[i])
	{
		cout<<"Stack "<<i<<" is Empty"<<endl;
		return -1;
	}
	return s[top[i]--];
}

void Stack::display(int i)
{
	int j;
	if(top[i] == bottom[i])
	{
		cout<<"Stack "<<i<<" is Empty"<<endl;
		return;
	}
	cout<<"Contents of Stack:\n";
	for(j=bottom[i]+1; j<=top[i]; j++)
		cout<<s[j]<<" ";
	cout<<endl;
}

int Stack::topele(int i)
{
	if(top[i] == bottom[i])
	{
		cout<<"Stack "<<i<<" is Empty"<<endl;
		return -999;
	}
	return s[top[i]];
}

int main()
{
	Stack s;
	s.push(5, 0); // 0 indexing of arrays
	s.display(0);
	s.pop(0);
	s.display(0);
	cout<<endl;

	// all stacks empty

	s.display(1);
	s.push(5, 1); 
    s.push(100, 1);
    s.push(1000, 1);
    s.pop(1);
    s.display(1);
    cout<<endl;

    s.pop(2);
    s.push(500, 2);
    s.push(100, 2);
    s.push(200, 2);
    cout << s.topele(2) << endl ;
    s.display(2);
    cout<<endl;

	return 0;
}