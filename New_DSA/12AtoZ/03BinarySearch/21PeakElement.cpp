int findPeakElement(vector<int>& arr) 
    {
        // Code here.
        int low=0,high=arr.size()-1;
        int ans=max(arr[0],arr[high]);
        while(low<=high){
            int mid=low+(high-low)/2;
            if(mid>0&&mid<arr.size()-1 && arr[mid]>arr[mid-1]&&arr[mid]>arr[mid+1]){
                ans=arr[mid];
                return ans;
            }
            else if(mid>0 && arr[mid]<arr[mid-1]){
               high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }