#include <iostream>
#include <vector>
using namespace std;

int findThrees(vector <int> v1)
{
  int sum;
  for (int i = 0; i < v1.size (); i++)
  {
    if ((v1 [i] % 3) == 0)
	{
      sum = v1 [i]+ sum;
    }
  }
  
  return sum;
}

int main ()
{
  int n2; 
  vector <int> list;
  cout << "How many values you will use? " << endl;
  cin>> n2;
  int valor;
  for (int i=0; i<n2; i++)
	{
		cout<< "Give me the value number " << i+1 << " : " <<endl;
		cin>> valor;
		list.push_back(valor);
		cout<< endl;
	}
	
  cout<< "This program takes a list of numbers and sums the ones that are divisible by 3" <<endl;
  cout << "The sum is: " << findThrees(list) << endl;
  cout<<" This program has ended. "<<endl;
  return 0;
}