// 2. Write a program to find the fast transpose of a sparse matrix represented using array
// of objects.

#include<iostream>
#include "sparse.cpp"
using namespace std;

int main()
{
	Sparse s[100];
	int mat[100][100];
	cout<<"Enter the number of rows:\n";
	int r;
	cin>>r;
	cout<<"Enter the number of columns:\n";
	int c;
	cin>>c;
	cout<<"Enter the elements:\n";
	for(int i=0; i<r; i++)
		for(int j=0; j<c; j++)
			cin>>mat[i][j];
	s[0].create(s, mat, r, c);
	s[0].display(s);

	return 0;
}