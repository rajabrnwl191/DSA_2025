#include <bits/stdc++.h>
using namespace std;
#define N 10
bool isvalidvertical(vector<string> &cross, string s, int index, int n, int row, int col)
{
  int count = 0, k = 0;
  for (int i = row; i < N; i++)
  {
    if (cross[i][col] == '-' || cross[i][col] == s[index + k])
    {
      count++;
      k++;
    }
    else
    {
      break;
    }
  }

  // cout<<"v"<<count<<endl;
  if (count == n)
    return true;
  else
    return false;
}
bool isvalidhorizontal(vector<string> &cross, string s, int index, int n, int row, int col)
{
  int count = 0, k = 0;
  for (int i = col; i < N; i++)
  {
    if (cross[row][i] == '-' || cross[row][i] == s[index + k])
    {
      count++;
      k++;
    }
    else
    {
      break;
    }
  }
  // cout<<"h"<<count<<endl;
  if (count == n)
    return true;
  else
    return false;
}
void setvertical(vector<string> &cross, string s, int index, int n, int row, int col, bool check[])
{
  int k = 0;
  for (int i = row; i < (row + n); i++)
  {
    if (cross[i][col] == '-')
    {
      cross[i][col] = s[index + k];
      check[k] = true;
      k++;
    }
    else
    {
      k++;
    }
  }
  // cout<<"setver"<<endl;
}
void sethorizontal(vector<string> &cross, string s, int index, int n, int row, int col, bool check[])
{
  int k = 0;
  for (int i = col; i < (col + n); i++)
  {
    if (cross[row][i] == '-')
    {
      cross[row][i] = s[index + k];
      check[k] = true;
      k++;
    }
    else
    {
      k++;
    }
  }
  // cout<<"sethor"<<endl;
}
void resetvertical(vector<string> &cross, string s, int index, int n, int row, int col, bool check[])
{
  int k = 0;
  for (int i = row; i < (row + n); i++)
  {
    if (check[k] = true)
    {
      cross[i][col] = '-';
      k++;
    }
    else
    {
      k++;
    }
  }
  index = index - n;
  // cout<<"resetver"<<endl;
}
void resethorizontal(vector<string> &cross, string s, int index, int n, int row, int col, bool check[])
{
  int k = 0;
  for (int i = col; i < (col + n); i++)
  {
    if (check[k] = true)
    {
      cross[row][i] = '-';
      k++;
    }
    else
    {
      k++;
    }
  }
  index = index - n;
  // cout<<"resethor"<<endl;
}
bool helper(vector<string> &cross, string s, int index)
{
  // isvalidvertical
  // isvalidhorizontal
  // setvertical
  // sethorizontal
  // resethorizontal
  // resetvertical
  if (index >= s.length())
    return true;
  //   cout<<"index"<<index<<endl;
  for (int i = 0; i < N; i++)
  {
    for (int j = 0; j < N; j++)
    {
      if (cross[i][j] == '-' || cross[i][j] == s[index + 0])
      {
        int n = 0;
        while (s[index + n] != ';' && index + n < s.length())
        {
          n++;
        }
        //   cout<<n<<"@"<<i<<"#"<<j;
        if (isvalidvertical(cross, s, index, n, i, j))
        {
          // cout<<"v%"<<i<<"&"<<j;
          bool check[n] = {0};
          setvertical(cross, s, index, n, i, j, check);
          bool ans = helper(cross, s, index + n + 1);
          // cout<<"yes"<<ans<<endl;
          if (ans)
            return true;
          resetvertical(cross, s, index, n, i, j, check);
          //    cout<<"index"<<index<<endl;
        }
        //   cout<<n<<"@"<<i<<"#"<<j;
        if (isvalidhorizontal(cross, s, index, n, i, j))
        {
          // cout<<"h%"<<i<<"&"<<j;
          bool check[n] = {0};
          sethorizontal(cross, s, index, n, i, j, check);
          bool ans = helper(cross, s, index + n + 1);
          // cout<<"yes"<<ans<<endl;
          if (ans)
            return true;
          resethorizontal(cross, s, index, n, i, j, check);
          // cout<<"index"<<index<<endl;
        }
      }
    }
  }
}

int main()
{
  vector<string> cross;
  string sub;
  for (int j = 0; j < N; j++)
  {
    cin >> sub;
    cross.push_back(sub);
  }

  string s;
  cin >> s;

  helper(cross, s, 0);
  for (int i = 0; i < N; i++)
  {
    for (int j = 0; j < N; j++)
    {
      cout << cross[i][j];
    }
    cout << endl;
  }
  // write your code here
  return 0;
}