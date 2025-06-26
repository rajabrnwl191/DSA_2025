vector<vector<int>> insert(vector<vector<int>> &arr, vector<int> &newInterval)
{
  int n = arr.size();
  vector<vector<int>> ans;
  int f = 0, s = 0, i = 0;
  for (; i < n; i++)
  {
    if (arr[i][1] >= newInterval[0] && arr[i][0] <= newInterval[1])
    {
      f = min(arr[i][0], newInterval[0]);
      s = max(arr[i][1], newInterval[1]);
      // merge common
      while (i + 1 < n && s >= arr[i + 1][0])
      {
        s = max(s, arr[i + 1][1]);
        i++;
      }
      ans.push_back({f, s});
      i++;
      break;
    }
    else if (arr[i][1] > newInterval[0] && arr[i][0] > newInterval[1])
    {
      ans.push_back(newInterval);
      break;
    }
    else
    {
      ans.push_back(arr[i]);
    }
  }
  while (i < n)
  {
    ans.push_back(arr[i]);
    i++;
  }
  if (n == 0 || arr[n - 1][1] < newInterval[0])
  {
    ans.push_back(newInterval);
  }
  return ans;
}