#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;
int main()
{
  int arr[] = {
      1,
      2,
      2,
      3,
      3,
      5,
      4,
      4,
      4,
      5,
  };
  // vector<pair<int,int>> ans;
  unordered_map<int, int> map;
  for (int i = 0; i < 10; i++)
  {
    map[arr[i]] = map[arr[i]] + 1;
    //  ans.push_back();
  }
  // for (int i = 0; i < 10; i++)
  // {
  //   if (map[arr[i]] > 0)
  //   {
  //     cout << arr[i] << map[arr[i]] << " ";
  //     map[arr[i]] = 0;
  //   }
  // }
  cout << endl;
  unordered_map<int, int>::iterator it = map.begin();
  while (it != map.end())
  {
    cout << "key: " << it->first << " value: " << it->second << endl;
    it++;
  }
}
