nt partitionArray(int arr[], int start, int end) {
	// Write your code here
	int pivot=arr[end];
	int low=start-1;
	for(int j=start;j<=end;j++ ){
		if(arr[j]<pivot){
			low++;
			int t=arr[j];
			arr[j]=arr[low];
			arr[low]=t;
		}
	}
	low++;
	int t=arr[end];
	arr[end]=arr[low];
	arr[low]=t;
	
	return low;
}

void quickSort(int input[], int start, int end) {
	if(start<end){
		 int pivot=partitionArray(input,start,end);
		 quickSort(input,start, pivot-1);
		 quickSort(input,pivot+1, end);
	}
	
}