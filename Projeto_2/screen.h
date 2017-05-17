#ifndef SCREEN_H
#define SCREEN_H
#include <vector>
#include <iostream>
using namespace std;

class Screen{
private:
  int nlin, ncol;
  char brush;
  vector< vector<char> > mat;

public:
  Screen();
  Screen(int _nlin, int _ncol);
  vector< vector<char> > getMat();
  void setPixel(int x, int y);
  void clear();
  void setBrush(char brush);
  friend ostream& operator<<(ostream &os, Screen &t);
};

#endif // SCREEN_H
