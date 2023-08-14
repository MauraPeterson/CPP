#ifndef MATH_UTILS
#define MATH_UTILS

struct Rectangle{
  double length;
  double width;
};

namespace utilz{
  double calculate_area(double length, double width);

  double calculate_area(double width);

  double calculate_area(Rectangle rectangle);

  double pow(double base, int pow=2);
}

#endif