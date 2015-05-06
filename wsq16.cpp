#include <iostream>
#include <string>
#include <fstream>
#include <stdio.h>
#include <algorithm>

using namespace std;

int main(int argc, char *argv[])
{

string line;

string MR, HMPG, CMPG;
int count=0;

float midrange = 0.0, highwaympg = 0.0, citympg = 0.0, summidrange = 0.0, sumcity = 0.0, sumhighw = 0.0;

ifstream inFile;

inFile.open("93cars.dat.txt");

	while(getline(inFile,line))
	{
		if((count%2)==0)
		{
			MR = line.substr(43, 46);

			midrange = atoi(MR.c_str());

			CMPG = line.substr(53, 54);

			citympg = atoi(CMPG.c_str());

			HMPG = line.substr(56, 57);

			highwaympg = atoi(HMPG.c_str());

			summidrange += midrange;

			sumcity += citympg;

			sumhighw += highwaympg;
		}

		count++;
	}

	cout << "Here is the average mileage of a set of vehicles from 1993 in cities and highways: " << endl << endl;
	cout << "Average gas mileage cities: " << sumcity/93.0 << " M/G" << endl;
	cout << "Average gas mileage highways: " << sumhighw/93.0 << " M/G" << endl;
	cout << "The average of the midrange price of the vehicles: "<< "$" << (summidrange/93.0)*1000.00 << endl << endl;

return 0;
}