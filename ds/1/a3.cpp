// 3. Write a program to read two matrices A & B and perform the following:
// i.) Multiply two matrices
// ii.) Add two matrices
// iii.) Read a square Matrix and check if it a magic square or not.

#include<iostream>
#include <math.h>
using namespace std;

int main()
{

		
			cout<<"enter the dimensions of the Matrix A:\n";
			int a_n, a_m;
			cin>>a_n>>a_m;

			cout<<"enter the elements:\n";
			int a[a_n][a_m];
			for(int i=0; i<a_n; i++)
				for(int j=0; j<a_m; j++)	
					cin>>a[i][j];

			cout<<"Matrix A:\n";
			for(int i=0; i<a_n; i++)
			{
				for(int j=0; j<a_m; j++)	
					cout<<a[i][j]<<" ";
				cout<<endl;
			}
			cout<<endl;

			cout<<"enter the dimensions of the Matrix B:\n";
			int b_n, b_m;
			cin>>b_n>>b_m;

			cout<<"enter the elements:\n";
			int b[b_n][b_m];
			for(int i=0; i<b_n; i++)
				for(int j=0; j<b_m; j++)	
					cin>>b[i][j];

			cout<<"Matrix B:\n";
			for(int i=0; i<b_n; i++)
			{
				for(int j=0; j<b_m; j++)	
					cout<<b[i][j]<<" ";
				cout<<endl;
			}
			cout<<endl;

			// 1: Multiplying 2 matrices:
			int c[a_n][b_m]={0};
			cout<<a_n<<" "<<b_m<<endl;
			if(a_m != b_n)
			{
				cout<<"Operation (multiplication) cannot be done. Check dimensions"<<endl;
				return 0;
			}
			else
			{
				// a_n a_m b_n b_m
				for(int i=0; i<a_n; i++)
					for(int j=0; j<b_m; j++)
						for(int k=0; k<a_m; k++)
							c[i][j] += a[i][k] * b[k][j];

			}
			cout<<"Matrix C (Matrix multiplication):\n";
			for(int i=0; i<a_n; i++)
			{
				for(int j=0; j<b_m; j++)	
					cout<<c[i][j]<<" ";
				cout<<endl;
			}
			cout<<endl;
			
			// 2: Adding 2 matrices:
			int d[a_n][a_m];
			if(a_n != b_n || a_m != b_m)
			{
				cout<<"Operation (addition) cannot be done. Check dimensions"<<endl;
				return 0;
			}
			else
			{
				for(int i=0; i<b_n; i++)
					for(int j=0; j<b_m; j++)	
						d[i][j] = a[i][j] + b[i][j];
			}
			cout<<"Matrix D (Matrix addition):\n";
			for(int i=0; i<b_n; i++)
			{
				for(int j=0; j<b_m; j++)	
					cout<<d[i][j]<<" ";
				cout<<endl;
			}
			cout<<endl;
			
		// 3: Magic Square:

		cout<<"enter the dimension of the Magic Square:\n";
		int n;
		cin>>n;

		cout<<"enter the elements:\n";
		int m[n][n];
		for(int i=0; i<n; i++)
			for(int j=0; j<n; j++)	
				cin>>m[i][j];

		cout<<"Matrix M:\n";
		for(int i=0; i<n; i++)
		{
			for(int j=0; j<n; j++)	
				cout<<m[i][j]<<" ";
			cout<<endl;
		}
		cout<<endl;
		float sum = n * (pow(n, 2) + 1) / 2;

		// rows and cols:
		int temp=0, flag=0;
		for(int i=0; i<n; i++)
		{
			temp=0;
			for(int j=0; j<n; j++)
				temp += m[i][j];

			if(temp != sum)
			{
				flag=1;
				break;
			}
		}
		temp=0;
		for(int j=0; j<n; j++)
		{
			temp=0;
			for(int i=0; i<n; i++)
				temp += m[i][j];

			if(temp != sum)
			{
				flag=1;
				break;
			}
		}

		// diagonals:
		temp=0;
		for(int i=0; i<n; i++)
			temp += m[i][i];
		if(temp != sum)
			flag=1;

		temp=0;
		for(int i=0; i<n; i++)
			temp += m[i][n-i-1];
		if(temp != sum)
			flag=1;


		if(flag)
			cout<<"not a Magic Square!"<<endl<<endl;
		else
			cout<<"Magic Square!!"<<endl;

	return 0;

}