#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
using namespace std;

void check_banana (string filename){
  string line, banana = "banana";
  int count = 0;

  ifstream myfile;
  myfile.open (filename);
  if (myfile.good() == true){
    while (getline (myfile, line)){
      transform(line.begin(),line.end(),line.begin(), ::tolower);
      if (line.find (banana) != string::npos){
        count ++;
      }
    }
    cout << "The number of times that banana appears in the file is: " << count << endl;
  }
}



int main (){
  string name;

  cout << "What is the name of the file?" << endl;
  cin >> name
  cout<< endl;
  check_banana (name);
  return 0;
}