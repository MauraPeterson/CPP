#include <iostream>
#include <vector>
#include "user.h"

using namespace std;

int User::get_user_count()
{
  return user_count;
}

User::User()
{
  user_count++;
}

User::User(string first_name, string last_name, string status)
{
  this->first_name = first_name;
  this->last_name = last_name;
  user_count++;
}

User::~User()
{
  user_count--;
}

void User::output()
{
  cout << "I am a user" << endl;
}

string User::get_status()
{
  return status;
}

void User::set_status(string status)
{
  if(status == "Gold"
  || status == "Silver"
  || status == "Bronze")
  {
      this->status = status;
  }
  else
  {
    this->status = "No Status";
  }
}

void output_status(User user);


int User::user_count = 0;

ostream& operator << (ostream &output, const User user)
{
  output << user.first_name << " " << user.last_name << ": " << user.status << endl;
  return output;
}

istream& operator >> (istream &input, User &user){
  string status;
  input >> user.first_name >> user.last_name >> status;
  user.set_status(status);
  return input;
}

int add_user_if_not_exists(vector<User> &users, User user)
{
  for(int i = 0; i < users.size(); i++){
    if(users[i].first_name == user.first_name
      && users[i].last_name == user.last_name){
      return i;
    }
  }
  users.push_back(user);
  return users.size() - 1;
}

