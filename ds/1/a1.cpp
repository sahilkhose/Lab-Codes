// 1. Write a program to read two matrices A & B, create and display a third matrix C such
// that C(i, j) = max ( A(i, j) , B(i, j))


#include<iostream>
using namespace std;

int main()
{
	cout<<"enter the dimensions of the array A:\n";
	int a_n, a_m;
	cin>>a_n>>a_m;

	cout<<"enter the elements:\n";
	int a[a_n][a_m];
	for(int i=0; i<a_n; i++)
		for(int j=0; j<a_m; j++)	
			cin>>a[i][j];

	cout<<"Array A:\n";
	for(int i=0; i<a_n; i++)
	{
		for(int j=0; j<a_m; j++)	
			cout<<a[i][j]<<" ";
		cout<<endl;
	}
	cout<<endl;

	cout<<"enter the dimensions of the array B:\n";
	int b_n, b_m;
	cin>>b_n>>b_m;

	cout<<"enter the elements:\n";
	int b[b_n][b_m];
	for(int i=0; i<b_n; i++)
		for(int j=0; j<b_m; j++)	
			cin>>b[i][j];

	cout<<"Array B:\n";
	for(int i=0; i<b_n; i++)
	{
		for(int j=0; j<b_m; j++)	
			cout<<b[i][j]<<" ";
		cout<<endl;
	}
	cout<<endl;

	int c[a_n][a_m];
	if(a_n != b_n || a_m != b_m)
	{
		cout<<"Operation cannot be done. Check dimensions"<<endl;
		return 0;
	}
	else
	{
		for(int i=0; i<b_n; i++)
			for(int j=0; j<b_m; j++)	
				c[i][j] = max(a[i][j], b[i][j]);
	}
	cout<<"Array C:\n";
	for(int i=0; i<b_n; i++)
	{
		for(int j=0; j<b_m; j++)	
			cout<<c[i][j]<<" ";
		cout<<endl;
	}
	cout<<endl;

	return 0;

}