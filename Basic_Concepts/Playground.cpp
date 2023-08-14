#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

void swap(int &a, int &b){
  int temp = a;
  a = b;
  b = temp;
}

void swap(string &a, string &b){
  string temp = a;
  a = b;
  b = temp;


}

int main()
{

  int a = 10;
  int b = 15;
  swap(a, b);

  string c = "Hello";
  string d = "World";
  swap(c, d);
  cout << "a: " << a << endl << "b: " << b << endl;

  cout << "a: " << c << endl << "b: " << d << endl;
  return 0;
}