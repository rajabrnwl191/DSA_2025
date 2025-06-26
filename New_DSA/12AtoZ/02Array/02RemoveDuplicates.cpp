int removeDuplicates(vector<int> &arr, int n) {
	// Write your code here.
	int i=0;
	int j=1;
	while(j<n){
		while(j<n&&arr[j]==arr[i])j++;
		if(j<n&&arr[j]!=arr[i]){
			i++;
			//swap
			int t=arr[i];
			arr[i]=arr[j];
			arr[j]=t;
			j++;
		}
	}
	return i+1;
}