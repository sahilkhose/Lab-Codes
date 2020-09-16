// 2. Write a program to convert a given decimal number to a number in any base using
// stack.

#include<iostream>
#include "stack.cpp"
using namespace std;

int main()
{	
	cout<<"Enter a decimal number:\n";
	int num = 10;
	cin>>num;
	Stack s;
	int temp=num;
	int base;

	cout<<"Enter the base you want to convert into:\n";
	cin>>base;


	while(temp)
	{
		s.push(temp%base);
		temp/=base;
	}

	while(s.topele() != -999)
	{
		int ele = s.pop();
		if(ele > 9)
			cout<<char(ele - 10 + 'A')<<" ";
		else cout<<ele<<" ";
	}
	cout<<endl;

	return 0;
}