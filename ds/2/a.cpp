// CPP code perform relational 
// operation using compare function 
#include <iostream> 

using namespace std; 

void compareFunction(string s1, string s2) 
{ 
	// comparing both using inbuilt function 
	int x = s1.compare(s2); 

	if (x != 0) 
		cout << s1 << " is not equal to "
			<< s2 << endl; 
	if (x > 0) 
		cout << s1 << " is greater than "
			<< s2 << endl; 
	else
		cout << s2 << " is greater than "
			<< s1 << endl; 
} 

// Main function 
int main() 
{ 
	string s1("Geeks"); 
	string s2("Gfdk"); 
	compareFunction(s1, s2); 
	return 0; 
} 
