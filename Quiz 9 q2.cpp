// Juan Carlos González Hernández A01630498

#include <iostream>
#include <cmath>

using namespace std;

long int superpower (int n1, int n2)
{
	long int superpower = pow (n1, n2);
	
	return superpower;
}

int main ()
{
	int n1, n2;
	cout<< "This program raised the first numer to the power of the second" <<endl;
	cout<< "Give me the first number"<<endl;
	cin>> n1;
	cout<< "Give me the second number" <<endl;
	cin>> n2;
	cout<< "The result is " << superpower(n1, n2) <<endl;
	
}
