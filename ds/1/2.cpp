// 2. Write a program to sort a given list of elements .Write the user defined functions to
// sort using
// i.)
// Bubble Sort
// ii.)
// Selection Sort
// iii.)
// Insertion Sort

#include<iostream>
using namespace std;

int main()
{
	cout<<"enter the length of the array:\n";
	int len;
	cin>>len;

	cout<<"enter the elements:\n";
	int arr[len];
	for(int i=0; i<len; i++)	
		cin>>arr[i];

	for(int i=0; i<len; i++)
		cout<<arr[i]<<" ";
	cout<<endl<<endl;


	while(true)
	{
		cout<<"enter the method to sort: \n0:bubble sort \n1:selection sort \n2:insertion sort \n3:exit\n";
		int met;
		cin>>met;

		int flag=1;

		switch(met)
		{
			case 0:
			// Bubble sort:
			for(int i=0; i<len-1; i++)
				for(int j=i; j<len; j++)
					if(arr[i] > arr[j])
						swap(arr[i], arr[j]);
			cout<<"Sorted array: "<<endl;
			for(int i=0; i<len; i++)
				cout<<arr[i]<<" ";
			cout<<endl<<endl;
			break;

			case 2:
			break;

			case 3:
			return 0;
		}
	}
	


	return 0;
}