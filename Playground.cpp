#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
  int slices;

  cout << "YO how many peices of pizza you want?";
  cin >> slices;
  int children = slices + 1;
  cout << "You have " << slices << " slices of pizza." << endl;

  return 0;
}