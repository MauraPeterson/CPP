#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main()
{
  string filename;

  cout << "Enter filename:";
  cin >> filename;

  ofstream file(filename, ios::app);

  if(!file.is_open()){
    cout << "Could not open file";
    return -1;
  }

  vector<string> names;

  string input;

  cout << "Enter name, type 'quit' to quit" << endl;
  while(input != "quit"){
    cin >> input;
    if(input != "quit"){
      names.push_back(input);
    }
  }

  for(string name : names){
    file << name << endl;
  }

  file.close();
}