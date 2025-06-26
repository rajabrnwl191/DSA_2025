vector<int> getSecondOrderElements(int n, vector<int> a) {
    // Write your code here.
    int maxi=INT_MIN,smax=INT_MIN;
    int mini=INT_MAX,smin=INT_MAX;
    for(int i=0;i<n;i++){
        if(a[i]>maxi||a[i]>smax){
            smax=min(maxi,a[i]);
            maxi=max(maxi,a[i]);
        }
        if(a[i]<mini||a[i]<smin){
            smin=max(mini,a[i]);
            mini=min(mini,a[i]);
        }
    }
    return {smax,smin};
}