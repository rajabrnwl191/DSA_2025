pair<int, int> getFloorAndCeil(vector<int> &a, int n, int x) {
	// Write your code here.
	int low=0,high=n-1,ans1=-1,ans2=-1;
	while (low<=high){
		int mid=(low+high)/2;
		if (a[mid]<=x) {
			ans1=a[mid];
			low=mid+1;
		} 
		else {
			high = mid - 1;
		}
    }
	low=0,high=n-1;
	while (low<=high){
		int mid=(low+high)/2;
		if (a[mid]>=x) {
			ans2=a[mid];
			high = mid - 1;
		} 
		else {
			low=mid+1;
		}
    }
    return { ans1, ans2 };
}