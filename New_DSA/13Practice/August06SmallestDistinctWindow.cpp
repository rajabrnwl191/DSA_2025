int findSubString(string &str)
{
  // code here

  unordered_map<int, int> mp;
  for (int i = 0; i < str.size(); i++)
  {
    mp[str[i]]++;
  }
  int len = mp.size(), start = 0, end = 0, ans = INT_MAX;
  mp.clear();
  while (end < str.size())
  {
    if (mp.size() == len)
    {
      while (mp.size() == len)
      {
        if (end - start < ans)
          ans = end - start;
        mp[str[start]]--;
        if (mp[str[start]] == 0)
          mp.erase(str[start]);
        start++;
      }
    }
    else
    {
      mp[str[end]]++;
      end++;
    }
  }
  while (mp.size() == len)
  {
    if (end - start < ans)
      ans = end - start;
    mp[str[start]]--;
    if (mp[str[start]] == 0)
      mp.erase(str[start]);
    start++;
  }
  return ans;
}