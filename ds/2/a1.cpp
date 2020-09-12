// 1. Write a C++ program to write the students’ records (Name, Roll No., Grade, Branch)
// into a text file. Read the text file and store the student records branchwise in separate
// files.

#include<iostream>
#include<string.h>
#include<fstream>
using namespace std;

class Student
{

public:
	char name[20];
	int rollno;
	char grade;
	char branch[20];

	void read(Student[], int);
	void display(Student[], int);
	void sort_details(Student[], int); // no use, sorts acc to branch
	int distinct(Student[], int); // to find distinct no of branches -> no use
};


void Student::read(Student group[], int i)
{
	cout<<"Enter the name of student "<<i+1<<": \n";
	cin>>group[i].name;
	cout<<"Enter the rollno of student "<<i+1<<": \n";
	cin>>group[i].rollno;
	cout<<"Enter the grade of student "<<i+1<<": \n";
	cin>>group[i].grade;
	cout<<"Enter the branch of student "<<i+1<<": \n";
	cin>>group[i].branch;
}

void Student::display(Student group[], int i)
{
	cout<<"Student "<<i+1<<"  --->  Name: "<<group[i].name<<"\tRoll No: "<<group[i].rollno<<"\tGrade: "<<group[i].grade<<"\tBranch: "<<group[i].branch<<endl;
}

void Student::sort_details(Student group[], int count) // no use, sorts acc to branch
{
	for(int i=0; i<count-1; i++)
		for(int j=i; j<count; j++)
			if(strcmp(group[i].branch, group[j].branch) > 0)
			{
				Student temp;
				temp = group[i];
				group[i] = group[j];
				group[j] = temp;
			}
}

int Student::distinct(Student group[], int count) // to find distinct no of branches -> no use
{
	int dis=1;
	int i=0, j=0;
	while(i<count)
	{
		for(j=i; j<count; j++)
		{
			if(strcmp(group[i].branch, group[j].branch) != 0)
			{
				dis++;
				break;
			}
		}
		i=j;
	}
	cout<<endl<<"Number of distinct branches: "<<dis<<endl; 
	return dis;
}

int file_write()
{
	ofstream file1;
    file1.open("Student.txt", ios::app);

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
		file1.write((char*)&group[i],sizeof(group[i]));
		cout<<endl;
	}

	
    file1.close();
    return count;
}

void file_read(int count)
{
	Student group[count];
	ifstream file2;
    file2.open("Student.txt",ios::in);
    file2.seekg(0);
    

    cout<<endl<<"The details of the students after reading are:\n";
	for(int i=0; i<count; i++)
	{
		file2.read((char*)&group[i],sizeof(group[i]));
		group[i].display(group, i);
		cout<<endl;
	}
    
    file2.close();

 	// group[0].sort_details(group, count);
	// cout<<endl<<"The details of the students after sorting are:\n";
	// for(int i=0; i<count; i++)
	// {
	// 	group[i].display(group, i);
	// 	cout<<endl;
	// }

	// int dis = group[0].distinct(group, count); // number of distinct branches

	for(int i=0; i<count; i++)
	{
		ofstream file1;
		file1.open(strcat(group[i].branch, ".txt"), ios::app);
		file1.write((char*)&group[i],sizeof(group[i]));
		file1.close();	
	}	

}

int main()
{
	int count = 3; // default number of students
	// count = file_write(); // execute once for input data
	file_read(count);
	return 0;
}