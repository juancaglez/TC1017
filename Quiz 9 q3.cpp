// Juan Carlos González Hernández A01630498

#include <iostream>

using namespace std;


int fibonacci (int n)
{
	long int i, next, first = 0, second = 1;
	if ( n == 0 || n == 1)
		{
			return n;
		}
	else 
		{
			for (i=2; i<=n; i++)
				{
					next = first + second;
					first = second;
					second = next;
				}
				
				return next;
		}
}

int main()
{
	int n;
	cout<< "This program tell you de fibonacci of a number" <<endl;
	cout<< "Give me a number" <<endl;
	cin>> n;
	cout<< "The fibonacci of your number is " << fibonacci(n) <<endl;
}
