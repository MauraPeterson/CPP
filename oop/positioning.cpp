#include <iostream>

using namespace std;

class Position
{
  public:
    int x;
    int y;
    Position operator + (Position pos)
    {
      Position new_pos;
      new_pos.x = x + pos.x;
      new_pos.y = y + pos.y;
      return new_pos;
    }
    bool operator == (Position pos)
    {
      if(x == pos.x && y == pos.y)
      {
        return true;
      }
      else
      {
        return false;
      }
    }

    
};

ostream& operator << (ostream& output, Position pos)
{
  output << "(" << pos.x << ", " << pos.y << ")";
  return output;
}

istream& operator >> (istream &input, Position &pos)
{
  input >> pos.x >> pos.y;
  return input;
}


int main()
{
  Position pos1, pos2;
  
  cin >> pos1;
  cin >> pos2;

  Position pos3 = pos1 + pos2;

  cout << pos3 << endl;

  if(pos1 == pos3){
    cout << "Hell yeah!" << endl;
  }



  return 0;
}