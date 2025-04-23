vector<int> answerQueries(vector<int> &nums, vector<int> &queries)
{
  vector<int> cpy = queries;
  sort(cpy.begin(), cpy.end());
  sort(nums.begin(), nums.end());
  long long sum = 0;
  unordered_map<int, int> mp;
  int i = 0, j = 0, q = queries.size(), n = nums.size();
  while (i < n && j < q)
  {
    if (sum + nums[i] <= cpy[j])
    {
      sum += nums[i];
      i++;
    }
    else
    {
      mp[cpy[j]] = i;
      j++;
    }
  }
  while (j < q)
  {
    mp[cpy[j]] = i;
    j++;
  }
  vector<int> ans;
  for (auto it : queries)
  {
    ans.push_back(mp[it]);
  }
  return ans;
}