#include <iostream>
#include <iterator>
#include <fstream>
#include <vector>
#include <string>
#include <cmath>

using namespace std;

float average( const vector<int>& myVector)
{
	float  tot;
	
	for (int i=0; i<myVector.size(); i++)
	{
		tot += myVector[i];		
	}
	
	float avg = tot/myVector.size();
	
	return avg;
}

float stand (const vector<int>& myVector)
{
	float temp = 0, avg;
	avg = average (myVector);
	
	for ( int i=0; i<myVector.size(); i++)
	{
		temp += pow(myVector[i]-avg, 2.0);
	}
	
	float standard = sqrt(temp/myVector.size());
	
	return standard;
}


void readnumbers (string names)
{	
	ifstream inFile;
	inFile.open(names);
	vector<int> list;
	int value, contador = 0, sum = 0;
	
	if (inFile.good())
	{
		while ( ! inFile.eof()){
			inFile >> value;
			list.push_back(value);
			contador++;
			
		}
		
		cout<< "The total of lines is: " << contador <<endl;
		
		for (unsigned int i = 0; i < list.size(); i++)
		{
			sum += list[i];
			
		}
		cout<< "The sum of the numbers is: " << sum <<endl;
		
		cout<< "The average of the list is: " << average(list) <<endl;
		cout<< "The standard deviation is: " <<stand(list) <<endl;
	}
	else{
		cout<< "error" <<endl;
	}
}

int main ()
{
	string name;
	cout<< "Name of the file";
	cin>> name;
	
	readnumbers(name);
	return 0;
}
