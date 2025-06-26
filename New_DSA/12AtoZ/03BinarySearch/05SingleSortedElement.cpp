int singleNonDuplicate(vector<int>& arr)
{
	// Write your code here
	int low=0,high=arr.size()-1;
	while(low<=high){
		int mid=low+(high-low)/2;
		//right
		if(arr[mid]==arr[mid+1]){
			if(mid%2==0)
			low=mid+1;
			else
			high=mid-1;
		}
		//left
		else if(arr[mid]==arr[mid-1]){
			if(mid%2==0)
			high=mid-1;
			else
			low=mid+1;
		}
		else 
		return arr[mid];
	}
}