#include <bits/stdc++.h>
using namespace std;

void print(char *name)
{
  cout << "Name :- " << name << endl;
  int arr[100];
  int n = 0;
  for (int i = 0; name[i] != '\0'; i++)
  {
    n++;
    if (name[i] == ' ')
    {
      arr[i] = 0;
      continue;
    }
    int x = name[i];
    if (65 <= x && x <= 90)
    {
      arr[i] = x - 64;
    }
    else if (97 <= x && x <= 122)
    {
      arr[i] = x - 96;
    }
    else
      arr[i] = -1;
  }

  for (int i = 0; i < n; i++)
  {
    if (arr[i] == 0)
    {
      cout << "  ";
      continue;
    }
    if (arr[i] == -1)
    {
      continue;
    }
    cout << arr[i];
  }
  cout << endl;
}

int main()
{
  char *name = new char[26];
  int len = 100;
  cout<<"Enter your name: \n";
  cin.getline(name, len);
  print(name);
  return 0;
}