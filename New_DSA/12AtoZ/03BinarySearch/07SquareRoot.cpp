int floorSqrt(int n)
{
    // Write your code here.
    int l=0,h=n,ans=0;
    while(l<=h){
        int m=l+(h-l)/2;
        if (m * m <= n) {
          ans = m;
          l = m + 1;
        } else{
            h=m-1;
        }
    }
    return ans;
}
