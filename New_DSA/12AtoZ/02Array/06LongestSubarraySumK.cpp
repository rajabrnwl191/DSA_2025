int longestSubarrayWithSumK(vector<int> a, long long k) {
    // Write your code here
    int i=0,j=0,n=a.size(),ans=0;
    long long sum=0;
    while(i<n){
      if (sum+a[i]<=k ) {
        sum += a[i];
        if (sum == k) {
        ans = max(ans, i - j+1 );
      }
        i++;
      } else {
        sum -= a[j];
        j++;
      }
    }
    return ans;
}
//******************Another method************************

int longestSubarrayWithSumK(vector<int> a, long long k) {
    // Write your code here
    int i=0,j=0,n=a.size(),ans=0;
    long long sum=0;
    while(i<n){
      if (sum+a[i]<=k ) {
        sum += a[i];
        i++;
      } else {
        sum -= a[j];
        j++;
      }
      if (sum == k) {
        ans = max(ans, i - j );
      }
    }
    return ans;
}