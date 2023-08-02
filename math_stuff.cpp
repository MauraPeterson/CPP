#include <iostream>

using namespace std;

struct Rectangle{
  double length;
  double width;
};

double calculate_area(double length, double width){
  return length * width;
}

double calculate_area(double width){
  return width * width;
}

double calculate_area(Rectangle rectangle){
  return rectangle.length * rectangle.width;
}

int main(){

  Rectangle rectangle;
  rectangle.length = 10;
  rectangle.width = 15;
  double area = calculate_area(rectangle.length, rectangle.width);

  cout << "Area: " << area << endl;

  area = calculate_area(rectangle.width);

  cout << "Area: " << area << endl;

  area = calculate_area(rectangle);

  cout << "Area: " << area << endl;

  return 0;
}