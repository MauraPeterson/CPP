#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
  const short MAX_VALUE = 6;
  const short MIN_VALUE = 1;

  srand(time(nullptr));
  int die1 = rand() % (MAX_VALUE - MIN_VALUE + 1) + MIN_VALUE;
  int die2 = rand() % (MAX_VALUE - MIN_VALUE + 1) + MIN_VALUE;

  cout << "Die 1: " << die1 << endl 
       << "Die 2: " << die2 << endl;
}