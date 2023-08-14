#include <iostream>
#include <ctime>
#include <string>
#include <vector>
#include <fstream>
#include <cmath>

using namespace std;

void print_vector(vector<int> &vector){
  for(int num : vector){
    cout << num << " ";
  }
  cout << endl;
}

int get_best_score(){
  ifstream input("best_score.txt");

  if(!input.is_open()){
    cout << "Could not open file" << endl;
    return INFINITY;
  }

  int best_score;
  input >> best_score;

  input.close();

  return best_score;
}

void save_score(int guess_count){

  int best_score = get_best_score();

  ofstream output("best_score.txt");

  if(!output.is_open()){
    cout << "Could not open file" << endl;
    return;
  }
  
  if(guess_count < best_score){
    output << guess_count;
  } else{
    output << best_score;
  }
  
  output.close();
}

void play_game()
{
  vector<int> guesses;
  int count = 0;

  int random = rand() % 251;
  cout << "Guess a number between 0 and 250" << endl;
  cout<< random << endl;

  while(true)
  {
    int guess;
    cin >> guess;
    count++;
    cout << count;

    guesses.push_back(guess);

    if(guess == random)
    {
      cout << "You win!!" << endl;
      print_vector(guesses);
      break;
    } else if(guess <= random){
      cout << "Guess is too low..." << endl;
    } else {
      cout << "Guess is too high..." << endl;
    }
  }

  save_score(count);
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