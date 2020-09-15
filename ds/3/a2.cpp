// 2. Write a program to check for matching parenthesis in a given expression.

#include<iostream>
#include "stack_string.cpp"
using namespace std;

int main()
{
	Stack s;

	char a[40];
	cout<<"Enter the expression:\n";
	cin>>a;

	int len_a = 0;

	for(len_a=0; a[len_a]!='\0'; len_a++)
		if(a[len_a] == '(' || a[len_a] == '{' || a[len_a] == '[' || a[len_a] == ')' || a[len_a] == '}' || a[len_a] == ']')
			s.push(a[len_a]);

	// WRONG IMPLEMENTATION:
	// int flag = 1;
	// for(int i=0; i<len_a; i++)
	// {
	// 	if(s.pop() != s.peek(i))
	// 	{
	// 		cout<<"Unbalanced paranthesis!!"<<endl;
	// 		flag = 0;
	// 		break;
	// 	}
	// }
	// if(flag)
	// 	cout<<"Balanced paranthesis!!"<<endl;


	return 0;
}