// 2. Write a C++ program to define a class student with the data members to store name,
// roll no and grade of the student. Also write the member functions to read, display, and
// sort student information according to the roll number of the student. All the member
// functions will have array of objects as arguments.

#include<iostream>
using namespace std;

class Student
{

public:
	char name[20];
	int rollno;
	char grade;

	void read(Student[], int);
	void display(Student[], int);
	void sort_details(Student[], int);
};


void Student::read(Student group[], int i)
{
	cout<<"Enter the name of student "<<i+1<<": \n";
	cin>>group[i].name;
	cout<<"Enter the rollno of student "<<i+1<<": \n";
	cin>>group[i].rollno;
	cout<<"Enter the grade of student "<<i+1<<": \n";
	cin>>group[i].grade;
}

void Student::display(Student group[], int i)
{
	cout<<"Student "<<i+1<<"  --->  Name: "<<group[i].name<<"\tRoll No: "<<group[i].rollno<<"\tGrade: "<<group[i].grade<<endl;
}

void Student::sort_details(Student group[], int count)
{
	for(int i=0; i<count-1; i++)
		for(int j=i; j<count; j++)
			if(group[i].rollno > group[j].rollno)
			{
				Student temp;
				temp = group[i];
				group[i] = group[j];
				group[j] = temp;
			}
}

int main()
{
	cout<<"Enter the number of students:\n";
	int count;
	cin>>count;

	Student group[count];
	cout<<endl<<"Enter the details of the students:\n\n";
	for(int i=0; i<count; i++)
	{
		group[i].read(group, i);
		cout<<endl;
	}
	cout<<endl<<"The details of the students are:\n";
	for(int i=0; i<count; i++)
	{
		group[i].display(group, i);
		cout<<endl;
	}

	group[0].sort_details(group, count);
	cout<<endl<<"The details of the students after sorting are:\n";
	for(int i=0; i<count; i++)
	{
		group[i].display(group, i);
		cout<<endl;
	}

	return 0;
}