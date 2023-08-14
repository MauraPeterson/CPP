#include <iostream>

using namespace std;

int main() {
  cout << "Enter a temperature in Fahrenheit" << endl;

  double fahrenheit;
  cin >> fahrenheit;

  double celsius = (fahrenheit - 32) / 1.8;

  cout << "Temperature in celsius = " << celsius << endl;

  return 0;
}
