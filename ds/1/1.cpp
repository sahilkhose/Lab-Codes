// 1. Write a program to search a given element in a list using
// i.)
// Linear Search
// ii.)
// Binary Search

#include<iostream>
using namespace std;

int main()
{
	cout<<"enter the length of the list:\n";
	int len;
	cin>>len;

	cout<<"enter the elements:\n";
	int arr[len];
	for(int i=0; i<len; i++)	
		cin>>arr[i];

	for(int i=0; i<len; i++)
		cout<<arr[i]<<" ";
	cout<<endl<<endl;

	int middle, start=0;
	int end = len;

	while(true)
	{

		cout<<"enter the element to search:\n";
		int ele;
		cin>>ele;

		cout<<"enter the method to search: (1:linear or 2:binary 3:exit)\n";
		int met;
		cin>>met;

		int flag=1;

		switch(met)
		{
			case 1:
			for(int i=0; i<len; i++)	
			{
				if(ele == arr[i])
				{
					cout<<"element found at "<<i+1<<" position!"<<endl<<endl;
					flag=0;
					break;
				}
			}
			break;

			case 2:
			// sort the array first:
			for(int i=0; i<len-1; i++)
				for(int j=i; j<len; j++)
					if(arr[i] > arr[j])
						swap(arr[i], arr[j]);

			// binary search:
			do
			{
				middle = (start + end)/2;
				if(arr[middle] > ele)
					end = middle-1;
				else if(arr[middle] < ele)
					start = middle+1;
				else if(arr[middle] == ele)
				{
					flag = 0;
					cout<<"element found!!"<<endl<<endl;
					break;
				}

			}
			while(start<end);
			break;

			case 3:
			return 0;
		}

		if(flag)
			cout<<"element not found!"<<endl<<endl;

	}
}