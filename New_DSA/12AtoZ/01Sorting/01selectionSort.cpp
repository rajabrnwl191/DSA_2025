void selectionSort(vector<int>&arr) {
    // Write your code here.
        for(int i=0;i<arr.size();i++){
        int mini=arr[i];
        int minInd=i;
        for(int j=i+1;j<arr.size();j++){
            if(arr[j]<mini){
                mini=arr[j];
                minInd=j;
            }
        }
        int t=arr[i];
        arr[i]=mini;
        arr[minInd]=t;
    }
}