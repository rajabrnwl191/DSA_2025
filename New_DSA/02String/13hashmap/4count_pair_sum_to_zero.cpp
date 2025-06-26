#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int pairSumTozero(vector<int> ans, int n)
{
  unordered_map<int, int> ourmap;
  for (int i = 0; i < n; i++)
  {
    if (ans[i] >= 0)
      ++ourmap[ans[i]];
  }
  int count = 0;
  for (int i = 0; i < n; i++)
  {
    if (ans[i] < 0)
    {
      int a = -ans[i];
      if (ourmap[a] > 0)
      {
        count += ourmap[a];
      }
    }
  }
  if (ourmap[0] > 0)
  {
    int a = ourmap[0];
    count += (a) * (a - 1) / 2;
  }

  return count;
}
int main()
{
  int n;
  cout << "Enter the size of array: ";
  cin >> n;
  vector<int> arr;
  cout << "Enter the element of array :" << endl;
  int a = 0;
  for (int i = 0; i < n; i++)
  {
    cin >> a;
    arr.push_back(a);
  }
  int ans = pairSumTozero(arr, n);
  cout << ans << endl;
  return 0;
}