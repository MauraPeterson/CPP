#include <iostream>
#include <vector>

#include "user.h"
#include "teacher.h"

// included for the visual studio c++ compiler
#include "user.cpp"
#include "teacher.cpp"


using namespace std;

void do_something(User &user)
{
  user.output();
}

int main()
{
  vector<User> users;

  User user1("Chad", "Buic", "Bronze"), 
      user2("Chad", "Ford", "Silver"), 
      user3("Chad", "Buic", "Gold");

  add_user_if_not_exists(users, user1);
  add_user_if_not_exists(users, user2);
  add_user_if_not_exists(users, user3);
  add_user_if_not_exists(users, user1);

  for(int i = 0; i < users.size(); i++){
    cout 
    << users[i].first_name << " " 
    << users[i].last_name << " " 
    << add_user_if_not_exists(users, users[i])  << endl;
  }

  user1.set_status("Taco");

  cout << user1.get_status() << endl;

  // vector deconstructs every time you add a user
  cout << User::get_user_count() << endl;

  cout << user3;
  User user4;

  /*
  cout << endl << "Enter User: ";
  cin >> user4;
  cout << user4;
  */

  Teacher teacher1;
  teacher1.output();

  teacher1.first_name = "Teach";
  teacher1.last_name = "Er";

  cout << teacher1;

  User& u = teacher1;
  do_something(u);

  return 0;
}