int IsPossible(vector<int>&arr, int mid){
	int  ans=1,cnt=0,n=arr.size();	
	for(int i=0;i<n;i++){
        if (cnt + arr[i] > mid) {
            ans++;
            cnt = 0;
        }
		cnt+=arr[i];
    }
    return ans;
}
int leastWeightCapacity(vector<int> &weights, int d)
{
	int n=weights.size();
    int low=1,high=0;
    for (int i = 0; i < weights.size(); i++) {
        low = max(weights[i],low);
        high+=weights[i];
    }
	while(low<=high){
		int mid=(high+low)/2;
		if (IsPossible(weights, mid)<=d)
			high=mid-1;
		else 
			low = mid + 1;
    }
	return low;
}