// Juan Carlos González Hdez Quiz9

#include <iostream>
#include <cmath>
#include <string>

using namespace std;

void palin ()
{
	string x;
	string y;
	
	cout<< "This program will tell you if the text is a palindrome or not " <<endl;
	cout<< "Enter a text " <<endl;
	cin>> x;
	
	y= string (x.rbegin(), x.rend());
	cout<< "The reverse of the text " << y << endl;
	
	if (x==y)
		{
			cout<< "The text you enter is a palindrom " <<endl;
		}
	else
		{
			cout<< "The text you enter is not a palindrome " <<endl;
		}
		
}

int main ()
{
	palin ();
	
	return 0;
}
