#include <iostream>
using namespace std;
int main()
{
  int i = 3;
  int t = i++ + --i + ++i - i--;
  printf("%d\n", t);
  i = 2;
  int y = --i + i++ + ++i - i--;
  printf("%d\n", y);
  i = 3;
  int z = ++i + i++ + --i + i--;
  printf("%d\n", z);
  int s = 8;
  s = (++s + s-- + --s);
  printf("%d\n", s);
  int a = 7;
  a += ++a + a++ + --a + a--;
  printf("%d\n", a);
  int p = 10;
  p += ++p + p++ + --p;
  printf("%d\n", p);
  int q = 11;

  return 0;
}