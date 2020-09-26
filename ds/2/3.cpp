// 3. Define a class time with data members hour, min, sec .Write the user defined
// functions to (i) Add (ii) To find difference between two objects of class time.
// Functions take two time objects as argument and return time object. Also write the
// display and read function.

#include <iostream>
#include<math.h>
using namespace std;

class Time
{
public:
	int hr, min, sec;

	Time() // default constructor
	{
		hr=0;
		min=0;
		sec=0;
	}
	Time(int h, int m, int s) // constructor
	{
		sec = s % 60;
		min = (m + s/60) % 60;
		hr = h + m/60 + s/3600; // hr = h + (m + s/60) / 60; // sec->min logic
	}

	void read();
	void display();
	Time add(Time, Time);
	Time sub(Time, Time);
};


void Time::read()
{
	cout<<"Enter hr:\n";
	cin>>hr;
	cout<<"Enter min:\n";
	cin>>min;
	cout<<"Enter sec:\n";
	cin>>sec;
	// following order is reverse of before because values are reinitialized here
	hr = hr + min/60 + sec/3600;
	min = (min + sec/60) % 60;
	sec = sec % 60;
}

void Time::display()
{
	cout<<"Hr: "<<hr<<"\tMin: "<<min<<"\tSec: "<<sec<<endl;
}

Time Time::add(Time t1, Time t2)
{
	Time t(t1.hr + t2.hr, t1.min + t2.min, t1.sec + t2.sec);
	return t;
}

Time Time::sub(Time t1, Time t2)
{
	// converting the time in seconds and passing it to constructor
	int t1_s = t1.sec + t1.min * 60 + t1.hr * 3600;
	int t2_s = t2.sec + t2.min * 60 + t2.hr * 3600;
	Time t(0, 0, abs(t1_s - t2_s));
	return t;
}

int main()
{
	Time t1, t2;
	cout<<"Enter time 1:\n";
	t1.read();
	t1.display();
	cout<<endl<<"Enter time 2:\n";
	t2.read();
	t2.display();

	Time t3, t4;
	t3 = t1.add(t1, t2);
	t4 = t1.sub(t1, t2);
	cout<<endl<<"Added time:\n";
	t3.display();
	cout<<"Subtracted time:\n";
	t4.display();


	return 0;
}