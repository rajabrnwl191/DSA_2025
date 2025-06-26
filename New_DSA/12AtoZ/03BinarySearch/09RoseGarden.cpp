pair<int,int> Min_Max_Ele(vector<int> arr){
	int mi=arr[0],ma=arr[0];
        for (int i = 1; i < arr.size(); i++) {
          mi = min(arr[i], mi);
          ma = max(arr[i], ma);
        }
        return {mi, ma};
}
bool IsPossible(vector<int>&arr, int mid,int k,int m){
	int n=arr.size(),ans=0,cnt=0;
	for(int i=0;i<n;i++){
		if(arr[i]<=mid)cnt++;
		else{
			ans+=cnt/k;
			cnt=0;
		}
	}
	ans+=cnt/k;
	if(ans>=m)return true;
	return false;
}
int roseGarden(vector<int> arr, int k, int m)
{
	// Write your code here
	int n=arr.size(),ans=-1;
	pair<int,int>p=Min_Max_Ele(arr);
	int l=p.first,h=p.second;
	while(l<=h){
		int mid=l+(h-l)/2;
		if (IsPossible(arr, mid, k, m)) {
			ans = mid;
			h=mid-1;
		} else {
				l = mid + 1;
		}
    }
	return ans;
}