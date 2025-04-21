int numberOfArrays(vector<int>& differences, int lower, int upper) {
  int ans=0;
  long long x=0,mi=0,ma=0;
  for(int i=0;i<differences.size();i++){
      x+=differences[i];
      mi=min(mi,x);
      ma=max(ma,x);
  }
  ans=(max(0,int((upper-ma)-(lower-mi)+1)));
  return ans;
}