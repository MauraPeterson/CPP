#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

void print_vector(vector<string> vector){
  for(string item : vector){
    cout << item << endl;
  }
}

int main()
{
  string filename;

  cout << "Enter filename: ";
  cin >> filename;

  ifstream file(filename);
  
  if(!file.is_open()){
    cout << "Could not open file";
    return -1;
  }

  vector<string> names;
  string input;

  while(getline(file, input)){
    names.push_back(input);
  }
    print_vector(names);
}