#include <sys/time.h>
#include <iostream>
#include <algorithm>
using namespace std;

long getTimeinMicroSeconds()
{
  struct timeval start;
  gettimeofday(&start, NULL);
  return start.tv_sec * 1000000 + start.tv_usec;
}
void switchcase(int n)
{
  switch (n)
  {
  case 0:
    cout << 'a' << endl;
    break;
  case 1:
    cout << 'b' << endl;
    break;
  case 2:
    cout << 'c' << endl;
    break;
  case 3:
    cout << 'd' << endl;
    break;
  case 4:
    cout << 'e' << endl;
    break;
  case 5:
    cout << 'f' << endl;
    break;
  case 6:
    cout << 'g' << endl;
    break;
  case 8:
    cout << 'h' << endl;
    break;
  case 9:
    cout << 'i' << endl;
    break;
  case 10:
    cout << 'j' << endl;
    break;
  case 11:
    cout << 'k' << endl;
    break;
  case 12:
    cout << 'l' << endl;
    break;
  case 13:
    cout << 'm' << endl;
    break;
  case 14:
    cout << 'n' << endl;
    break;
  case 15:
    cout << '0' << endl;
    break;
  case 16:
    cout << 'p' << endl;
    break;
  case 17:
    cout << 'q' << endl;
    break;
  case 18:
    cout << 'r' << endl;
    break;
  case 19:
    cout << 's' << endl;
    break;
  case 20:
    cout << 't' << endl;
    break;
  case 21:
    cout << 'u' << endl;
    break;
  case 22:
    cout << 'v' << endl;
    break;
  case 23:
    cout << 'x' << endl;
    break;
  case 24:
    cout << 'y' << endl;
    break;
  case 25:
    cout << 'z' << endl;
    break;
  default:
    cout << "good bye" << endl;
    break;
  }
}
void forloop(int n)
{
  char input[26];
  for (int i = 0; i < 26; i++)
  {
    input[i] = 97 + i;
  }
  cout << input[n];
}
int main()
{

  int n;
  cin >> n;
  long starttime, endtime;
  starttime = getTimeinMicroSeconds();
  switchcase(n);
  endtime = getTimeinMicroSeconds();
  cout << "Time taken is " << endtime - starttime << " " << endl;
  starttime = getTimeinMicroSeconds();
  forloop(n);
  endtime = getTimeinMicroSeconds();
  cout << "Time taken is " << endtime - starttime << " " << endl;
}