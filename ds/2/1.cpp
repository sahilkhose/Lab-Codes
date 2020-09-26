// 1. Write a program to perform following string operations without using string handling
// functions:
// a.) length of the string
// b.) string concatenation
// c.) string comparison
// d.) to insert a sub string
// e.) to delete a substring

#include<iostream>
using namespace std;

int main()
{
	int i;
	cout<<"enter the string:\n";
	char str[50];
	cin>>str;
	char temp[50];
	for(i=0; str[i]!='\0'; i++)
		temp[i] = str[i];
	temp[i] = '\0';

	// a:
	for(i=0; str[i]!='\0'; i++);
	int len = i;
	cout<<"length of the string is: "<<len<<endl;

	// b:
	cout<<"enter another string:\n";
	char str2[50];
	cin>>str2;
	for(i=len; str2[i-len] != '\0'; i++)
		temp[i] = str2[i-len];
	temp[i] = '\0';
	cout<<"the concatenated string is:\n";
	for(i=0; temp[i]!='\0'; i++)
		cout<<temp[i];
	cout<<endl;

	// c:
	int flag=1;
	for(i=0; str[i]!='\0' || str2[i]!='\0'; i++)
	{	
		if(str[i]-str2[i] > 0)
		{
			cout<<str<<" is greater than "<<str2<<endl;
			flag=0;
			break;
		}
		if(str2[i]-str[i] > 0)
		{
			cout<<str2<<" is greater than "<<str<<endl;
			flag=0;
			break;
		}
	}

	if(flag)
	{
		if(str[i] == '\0' && str2[i] != '\0')
			cout<<str2<<" is greater than "<<str<<endl;
		else if(str2[i] == '\0' && str[i] != '\0')
			cout<<str<<" is greater than "<<str2<<endl;
		else
			cout<<"both are same strings"<<endl;
	}

	// d:
	cout<<"enter the string to add:\n";
	char sub[50];
	cin>>sub;
	int len_s=0;
	for(i=0; sub[i]!='\0'; i++);
	len_s = i;
	cout<<i<<endl;
	cout<<"enter the index to add it to:\n";


	int idx, j;
	cin>>idx;
	// str[len+len_s] = '\0';
	// for(i=len+len_s-1; i>len_s + idx; i--)
	// 	str[i] = str[i-len_s];
	// for(i=idx, j=0; j<len_s; i++, j++)
	// 	str[i] = sub[j];
	// for(i=0; str[i]!='\0'; i++)
	// 	cout<<str[i];
	// cout<<endl;

	for(i=len+len_s; i>=idx+len_s; i--);
		str[i] = str[i-len_s];
	// str[len+len_s] = '\0';
	for(i=0; str[i]!='\0'; i++)
		cout<<str[i];
	cout<<endl;



	return 0;
}