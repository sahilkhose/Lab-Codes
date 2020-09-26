// 1. Write a program to check whether a given string is a palindrome or not using stacks.

#include<iostream>
#include "stack_string.cpp"
using namespace std;

int main()
{
	cout<<"enter the string:\n";
	char a[20];
	cin>>a;

	Stack s;
	int len_a = 0;

	for(len_a=0; a[len_a]!='\0'; len_a++)
		s.push(a[len_a]);

	int flag = 1;
	for(int i=0; i<len_a; i++)
		if(a[i] != s.pop())
			flag=0;
		
	if(flag)
		cout<<"palindrome!!!"<<endl;
	else
		cout<<"not palindrome!!"<<endl;

	return 0;
}