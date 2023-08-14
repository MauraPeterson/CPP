#ifndef TEACHER_H
#define TEACHER_H

#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Teacher : public User
{
  public:
    vector<string> classes_teaching;
    void output();
    Teacher();
};

#endif