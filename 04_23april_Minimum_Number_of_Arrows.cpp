int findMinArrowShots(vector<vector<int>> &points)
{
  sort(points.begin(), points.end());
  int n = points.size();
  int ps = points[0][0], pe = points[0][1], ns = 0, ne = 0;
  int ans = 1;
  for (int i = 1; i < n; i++)
  {
    ns = points[i][0];
    ne = points[i][1];
    if (ns > pe)
    {
      ans++;
      ps = ns;
      pe = ne;
    }
    else
    {
      ps = max(ps, ns);
      pe = min(pe, ne);
    }
  }
  return ans;
}