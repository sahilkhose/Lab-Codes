// Implementation of sparse matrix:

#include<iostream>
using namespace std;

class Sparse
{
	int row, col, value;
public:
	Sparse();
	Sparse(int, int, int);
	void display(Sparse s[]);
	void create(Sparse s[], int a[][100], int n, int m);
};


Sparse::Sparse()
{
	row = col = value = 0;
}	

Sparse::Sparse(int r, int c, int v)
{
	row = r;
	col = c;
	value = c;
}

void Sparse::display(Sparse s[])
{
	cout<<"row\tcol\tvalue\n";
	for(int i=1; i<=s[0].value; i++)
		cout<<s[i].row<<"\t"<<s[i].col<<"\t"<<s[i].value<<"\n";
}

void Sparse::create(Sparse s[], int a[][100], int n, int m)
{
	int idx=1;
	// for(int i=0; i<n; i++)
	// 	for(int j=0; j<m; j++)
	// 		if(a[i][j]!=0)
	// 			s[idx++] = Sparse(i, j, a[i][j]);
	s[0] = Sparse(n, m, idx);
}