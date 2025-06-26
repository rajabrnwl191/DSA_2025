void merge(int arr[],int l,int mid,int r){
    int i=l,j=mid+1,k=0;
    int newarr[r-l+1];
    while(i<=mid&&j<=r){
        if(arr[i]<arr[j]){
            newarr[k]=arr[i];
            k++;i++;
        }
        else{
            newarr[k]=arr[j];
            k++;j++;
        }
    }
    while(i<=mid){
        newarr[k]=arr[i];
            k++;i++;
    }
    while(j<=r){
        newarr[k]=arr[j];
            k++;j++;
    }
    k=0;
    for(int s=l;s<=r;s++){
        arr[s]=newarr[k];
        k++;
    }
}
void mergeSort(int arr[], int l, int r) {
    // Write Your Code Here
    if (l < r) {
        int mid = (l + r) / 2;
        mergeSort(arr, l, mid);
        mergeSort(arr, mid + 1, r);
        merge(arr, l, mid, r);
    }
}