
#ifndef USER_H
#define USER_H

#include <string>

using namespace std;

class User
{
  string status = "Gold";
  static int user_count;
  
  public:
    static int get_user_count();

    string first_name;
    string last_name;

    User();

    User(string first_name, string last_name, string status);

    string get_status();

    void set_status(string status);

    friend void output_status(User user);
    friend ostream& operator << (ostream &output, const User user);

    ~User();
};

#endif