#include <iostream>
#include <string>

namespace utilz{
  void print_array(const int data[], int size){
    for(int i = 0; i < size; i++){
      std::cout << data[i] << " ";
    }
    std::cout << std::endl;
  }
}

template <typename T>
void swap(T &a, T &b){
  T temp = a;
  a = b;
  b = temp;
}

template <typename T>
void swap(T a[], T b[], int size){
  for(int i = 0; i < size; i++){
    T temp = a[i];
    a[i] = b[i];
    b[i] = temp;
  }
}

int main()
{

  int a = 10;
  int b = 15;
  swap(a, b);
  std::cout << "a: " << a << std::endl << "b: " << b << std::endl;

  std::string c = "Hello";
  std::string d = "World";
  swap(c, d);

  std::cout << "a: " << c << std::endl << "b: " << d << std::endl;

  int e[] = {1, 2, 3};
  int f[] = {4, 5, 6};

  swap(e, f, 3);

  utilz::print_array(e, 3);
  utilz::print_array(f, 3);


  return 0;
}