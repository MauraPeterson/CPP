#include <iostream>
#include <ctime>
#include <string>
#include <vector>

using namespace std;

void print_vector(vector<int> &vector){
  for(int num : vector){
    cout << num << " ";
  }
  cout << endl;
}

void play_game()
{
  vector<int> guesses;

  int random = rand() % 251;
  cout << "Guess a number between 0 and 250" << endl;

  while(true)
  {
    int guess;
    cin >> guess;

    guesses.push_back(guess);

    if(guess == random)
    {
      cout << "You win!!" << endl;
      print_vector(guesses);
      return;
    } else if(guess <= random){
      cout << "Guess is too low..." << endl;
    } else {
      cout << "Guess is too high..." << endl;
    }
  }


}

int main()
{
  srand(time(NULL));
  int choice;

  do{
    cout << "0. Quit" << endl 
          << "1. Play Game" << endl;
    cin >> choice;

    switch(choice){
      case 0:
        cout << "Bye!";
        return 0;
      case 1:
        play_game();
        break;
    }
  } while(choice !=0);
  return 0;
}