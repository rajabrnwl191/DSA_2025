int Max_Ele(vector<int> arr){
	int ma=arr[0];
        for (int i = 1; i < arr.size(); i++) {
          ma = max(arr[i], ma);
        }
        return ma;
}
bool IsPossible(vector<int>&arr, int mid,int h){
	int n=arr.size();
	long long ans=0,cnt=0;
	for(int i=0;i<n;i++){
		cnt=arr[i]/mid;
		if(arr[i]%mid>0)cnt++;
		ans+=cnt;
	}
	if(ans<=h)return true;
	return false;
}
int minimumRateToEatBananas(vector<int> arr, int h) {
    
	int n=arr.size(),l=1;
	int high=Max_Ele(arr);
	while(l<=high){
		int mid=l+(high-l)/2;
		if (IsPossible(arr, mid, h))
			high=mid-1;
		else 
			l = mid + 1;
    }
	return l;
}