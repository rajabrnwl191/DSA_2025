#include <iostream>
using namespace std;
template <template T, template V>

class Pair
{
  T x;
  V y;

public:
  void setX(T x)
  {
    this->x = x;
  }
  void setY(U y)
  {
    this->y = y;
  }
  T getX()
  {
    return x;
  }
  U gety()
  {
    return y;
  }
};

int main()
{
  Pair<int, double> p1;
  p1.setX(10);
  p1.setY(10.20);
  cout << p1.getX() << " " << p1.getY() << endl;
  Pair<Pair<int, int>, int> p2;
  p2.setY(30);
  Pair<int, int> p;
  p.setX(24);
  p.setY(28);
  p2.setX(p);
  cout << p2.getX().getX() << " " << p2.getX().getY() << " " << p2.getY();
  return 0;
}