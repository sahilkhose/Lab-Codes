// 2. Write a recursive program to
// i.)
// Search an element using Binary search technique.
// ii.)
// Sort an array using selection sort technique.
// iii.)
// Multiply two numbers using repeated addition
#include<iostream>
using namespace std;

int mul(int a, int b)
{
	if(b!=1)
		return a + mul(a, b-1);
	else if(b==1)
		return a;
}

int bsearch(int a[], int size, int find, int start, int end)
{
	int middle = (start+end)/2;
	if(a[middle] > find)
		return bsearch(a, size, find, start, middle-1);
	else if(a[middle] < find)
		return bsearch(a, size, find, middle+1, end);
	else if(a[middle] == find)
	{
		cout<<"element found!!!"<<endl;
		return 0;
	}
}

int main()
{
	// 1: binary search:
	int a[] = {1, 2, 3, 4, 5};
	bsearch(a, 5, 4, 0, 5);

	// 2: selection sort:

	// 3: repeated addition:
	cout<<mul(100, 50)<<endl;

	return 0;
}