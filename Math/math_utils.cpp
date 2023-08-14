#include "math_utils.h"

namespace utilz{

  double calculate_area(double length, double width){
    return length * width;
  }

  double calculate_area(double width){
    return width * width;
  }

  double calculate_area(Rectangle rectangle){
    return rectangle.length * rectangle.width;
  }

  double pow(double base, int pow){
    int total = 1;
    for(int i = 0; i < pow; i++){
      total *= base;
    }
    return total;
  }
  
}
