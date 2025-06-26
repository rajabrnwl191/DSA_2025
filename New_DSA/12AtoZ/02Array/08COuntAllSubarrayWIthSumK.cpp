int findAllSubarraysWithGivenSum(vector < int > & a, int k) {
    // Write Your Code Here
    int i=0,j=0,n=a.size(),ans=0, sum=0;
    while(i<n){
      if (sum+a[i]<=k ) {
        sum += a[i];
        if (sum == k)
            ans++;
        i++;
      } else {
        sum -= a[j];
        j++;
      }
    }
    return ans;
}