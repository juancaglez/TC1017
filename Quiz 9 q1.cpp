// Juan Carlos González Hernández A01630498

#include <iostream>

using namespace std;

void triangles (int n)
{
	for (int i = 1; i<=n; i++)
		{
			for (int j=1; j<=i; j++)
				{
					cout<< "T";
				}
				
				cout<< endl;
		}
		
	for (int i = (n-1); i>0; i--)
		{
			for (int j=1; j<=i; j++)
				{
					cout<< "T";
				}
				
				cout<< endl;
		}
}

int main()
{
	int n;
	cout<< "This program makes a triangle as long as you want with the letter T" <<endl;
	cout<< "How long do you want your triangle?" <<endl;
	cin>> n;
	cout<< endl;
	triangles (n);
	
}
