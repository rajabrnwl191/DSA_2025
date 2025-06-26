/*
  Note:
  To get all the test cases accepted, make recursive calls in following order: Top, Down, Left, Right.
  This means that if the current cell is (x, y), then order of calls should be: top cell (x-1, y),
  down cell (x+1, y), left cell (x, y-1) and right cell (x, y+1).
*/
#include <bits/stdc++.h>
using namespace std;

void ratMaze(int N, bool arr[][20], int ans[][20], int row, int col)
{
  if (row == N - 1 && col == N - 1)
  {
    ans[N - 1][N - 1] = 1;
    for (int i = 0; i < N; i++)
    {
      for (int j = 0; j < N; j++)
        cout << ans[i][j] << " ";
    }
    cout << endl;
    return;
  }
  ans[row][col] = 1;
  if (row > 0 && arr[row - 1][col] == 1 && ans[row - 1][col] == 0)
  {
    ratMaze(N, arr, ans, row - 1, col);
    ans[row - 1][col] = 0;
  }
  if (row < N - 1 && arr[row + 1][col] == 1 && ans[row + 1][col] == 0)
  {
    ratMaze(N, arr, ans, row + 1, col);
    ans[row + 1][col] = 0;
  }
  if (col > 0 && arr[row][col - 1] == 1 && ans[row][col - 1] == 0)
  {
    ratMaze(N, arr, ans, row, col - 1);
    ans[row][col - 1] = 0;
  }
  if (col < N - 1 && arr[row][col + 1] == 1 && ans[row][col + 1] == 0)
  {
    ratMaze(N, arr, ans, row, col + 1);
    ans[row][col + 1] = 0;
  }

  return;
}
int main()
{
  int N;
  cin >> N;
  bool arr[N][20];
  for (int i = 0; i < N; i++)
  {
    for (int j = 0; j < N; j++)
    {
      cin >> arr[i][j];
    }
  }
  int ans[N][20] = {0};
  ratMaze(N, arr, ans, 0, 0);
  // Write your code here
  return 0;
}
