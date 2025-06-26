#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

vector<int> remove_dublicate_My_Method(int *arr, int n)
{
  vector<int> ans;
  unordered_map<int, bool> map;
  for (int i = 0; i < n; i++)
  {
    if (!map[arr[i]])
    {
      map[arr[i]] = 1;
      ans.push_back(arr[i]);
    }
  }
  return ans;
}
vector<int> remove_dublicate_concept_video(int *arr, int n)
{
  vector<int> ans;
  unordered_map<int, bool> map;

  for (int i = 0; i < n; i++)
  {
    if (map[arr[i]] > 0)
      continue;
    else
    {
      map[arr[i]] = 1;
      ans.push_back(arr[i]);
    }
  }

  return ans;
}
void print(vector<int> &ans)
{
  for (int i = 0; i < ans.size(); i++)
  {
    cout << ans[i] << " ";
  }
  cout << endl;
}
int main()
{
  int n;
  cout << "Enter the size of array: ";
  cin >> n;
  int arr[n];
  cout << "Enter the element of array :" << endl;
  for (int i = 0; i < n; i++)
    cin >> arr[i];

  vector<int> res1;
  res1 = remove_dublicate_concept_video(arr, n);
  print(res1);
  vector<int> res2;
  res2 = remove_dublicate_My_Method(arr, n);
  print(res2);
  return 0;
}