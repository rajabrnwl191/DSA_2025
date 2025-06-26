int powf(int mid,int m,int n){
long long ans=1;
  for(int i=1;i<=n;i++){
    ans=ans*mid;
    if(ans>m)return 2;
  }
  if(ans==m)return 1;
  return 0; 
}
int NthRoot(int n, int m) {
    // Write your code here.
    int l=0,h=m;
    while(l<=h){
        int mid=l+(h-l)/2;
        int t=powf(mid,m,n);
        if (t==1) 
          return mid;
        else if(t==0)
          l=mid+1;
        else
            h=mid-1;
    }
    return -1;

}