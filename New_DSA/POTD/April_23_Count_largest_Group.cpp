int countLargestGroup(int n)
{
  unordered_map<int, int> mp;
  for (int i = 1; i <= n; i++)
  {
    int sum = 0, j = i;
    ;
    while (j > 0)
    {
      sum += (j) % 10;
      j = j / 10;
    }
    mp[sum]++;
  }
  int maxi = 0, ans = 0;
  for (auto it : mp)
  {
    maxi = max(it.second, maxi);
  }
  for (auto it : mp)
  {
    if (it.second == maxi)
      ans++;
  }
  return ans;
}