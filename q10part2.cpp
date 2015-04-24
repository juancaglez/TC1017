#include <iostream>
#include <vector>
using namespace std;

int Product (vector <int> v1, vector <int> v2)
{
  int total = 0;
  for (int i = 0; i < v1.size (); i++)
  {
    total += (v1 [i] * v2 [i]);
  }
  return total;
}

int main ()
{
  vector <int> list1;
  vector <int> list2;
  int n1, n2, size;

  cout<< "This program gave you the dot product of two lists"
  cout << "How many numbers your list will have?" << endl;
  cin>> size;
  cout << "Give me the numbers for the first list: " << endl;
  for (int i = 0; i < size; ++i)
  {
    cin >> n1;
    list1.push_back (n1);
  }

  cout << "Give me the numbers for the second list: " << endl;
  for (int i = 0; i < size; ++i)
  {
    cin >> n2;
    list2.push_back (n2);
  }
  cout << "The dot product of the lists is " << Product (list1, list2) << endl;
  return 0;
}