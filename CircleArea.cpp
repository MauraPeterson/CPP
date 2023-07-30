#include <iostream>
#include <cmath>

using namespace std;

const double PI {3.14};

int main() {
  cout << "Enter the radius:" << endl;
  double radius;
  cin >> radius;

  double area = pow(radius, 2) * PI;

  cout << "Area: " << area << endl;

  return 0;
}