#include <bits/stdc++.h>
using namespace std;
int helper(int arr[], int n, int sum, int k, int i, int count)
{
  if (i == n)
  {
    if (sum == k)
      count++;
    return count;
  }

  count = helper(arr, n, sum + arr[i], k, i + 1, count);
  count = helper(arr, n, sum, k, i + 1, count);
  return count;
}
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n, k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
      cin >> arr[i];
    }
    int count = 0;
    int sum = 0;
    count = helper(arr, n, sum, k, 0, count);
    cout << count << endl;
  }

  // write your code here
  return 0;
}