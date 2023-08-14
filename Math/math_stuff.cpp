#include <iostream>
#include "math_utils.h"

using namespace std;

int main(){

  Rectangle rectangle;
  rectangle.length = 10;
  rectangle.width = 15;
  double area = utilz::calculate_area(rectangle.length, rectangle.width);

  cout << "Area: " << area << endl;

  area = utilz::calculate_area(rectangle.width);

  cout << "Area: " << area << endl;

  area = utilz::calculate_area(rectangle);

  cout << "Area: " << area << endl;

  double base = 3;
  double power = 3;
  cout << "Power: " << utilz::pow(base, power) << endl;
  cout << "Power: " << utilz::pow(base) << endl;

  return 0;
}