#include <iostream>
using namespace std;
int main()
{
  int hr, min, sec;
  cout << "Enter the hours minutes and seconds : ";
  cin >> hr >> min >> sec;
  int hrdeg = 0, mindeg = 0, secdeg = 0, uphrmin = 0, upmin = 0, uphrsec = 0;
  hrdeg = hr * (1 / 12);
  mindeg = min * (1 / 60);
  secdeg = sec * (1 / 60);
  uphrmin = min * (1 / 120);
  uphrsec = sec * (1 / 120);
  upmin = sec * (1 / 10);
  hrdeg = hrdeg + uphrmin + uphrsec;
  mindeg = mindeg + upmin;
  cout << "hourdeg : " << hrdeg << endl;
  cout << "mindeg : " << mindeg << endl;
  cout << "secdeg : " << secdeg << endl;
  return 0;
}