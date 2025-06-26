int findKRotation(vector<int> &arr){
    // Write your code here.    
    int n=arr.size()-1;
    int low=0,high=n-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if (arr[mid] > arr[mid + 1]) return mid+1;
        else if (arr[low] <= arr[mid]) low = mid + 1;
        else high = mid - 1;
    }   
    return 0;
}