#include <iostream>
using namespace std;
#define N 9
bool isPossible(int grid[N][N], int row, int col, int key)
{
  for (int i = 0; i < N; i++)
  {
    if (grid[i][col] == key)
      return false;
    if (grid[row][i] == key)
      return false;
  }
  int m = 3 * (row / 3);
  int n = 3 * (col / 3);
  // int m=row-(row%3);
  // int n=col-(col%3);
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      if (grid[m + i][n + j] == key)
        return false;
    }
  }

  return true;
}
bool empty(int grid[N][N], int &row, int &col)
{
  for (int i = 0; i < N; i++)
  {
    for (int j = 0; j < N; j++)
      if (grid[i][j] == 0)
      {
        row = i;
        col = j;
        return true;
      }
  }
  return false;
}
bool SolveSudoku(int grid[N][N])
{
  int row, col;
  if (!empty(grid, row, col))
    return true;
  for (int j = 1; j <= N; j++)
  {
    if (isPossible(grid, row, col, j))
    {
      grid[row][col] = j;
      if (SolveSudoku(grid))
        return true;
      grid[row][col] = 0;
    }
  }
  return false;
}

void printGrid(int grid[N][N])
{
  for (int i = 0; i < N; i++)
  {
    for (int j = 0; j < N; j++)
    {
      cout << grid[i][j] << " ";
    }
    cout << endl;
  }
}
int main()
{
  // your code goes here
  int grid[N][N];
  for (int i = 0; i < N; i++)
    for (int j = 0; j < N; j++)
    {
      cin >> grid[i][j];
    }
  SolveSudoku(grid);
  printGrid(grid);
  return 0;
}
