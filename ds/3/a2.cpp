// 2. Write a program to check for matching parenthesis in a given expression.

#include<iostream>
#include "stack_string.cpp"
using namespace std;

int main()
{
    Stack s1;
    int flag = 1; // to check if ), ] or } is in the beginning
    cout << "Enter the expression:\n";
    char exp[100];
    cin>>exp;

    for(int i=0; exp[i]!='\0'; i++)
    {
        if (exp[i] == '(' || exp[i] == '[' || exp[i] == '{'  )
			s1.push(exp[i]);

        else if (exp[i] == ')' || exp[i] == ']' || exp[i] == '}')
        {
            if (s1.isEmpty())
            {
                flag = 0;
                break;
            }
            if( (s1.topele() == '(' && exp[i] == ')') || (s1.topele() == '[' && exp[i] == ']') || (s1.topele() == '{' && exp[i] == '}') )
				s1.pop();
        }
    }

    if (s1.isEmpty() && flag == 1)
		cout << "The expression is balanced." << endl;
    else if ( flag == 0 || s1.isEmpty() == 0)
		cout << "The expression is not balanced." << endl;

    return 0;
}