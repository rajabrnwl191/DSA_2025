//O(logN)
int KthMissingElement(int arr[], int n, int k)
{
    
    int start=0,prev=0, end=n-1;
    while(start<=end){
        int mid=(start+end)/2;
        if(k<=((arr[mid]-arr[prev]-1)-(mid-prev-1))){
            end=mid-1;
        }
        else{
            k-=((arr[mid]-arr[prev]-1)-(mid-prev-1));
            prev=mid;
            start=mid+1;
        }
    }
    if(arr[prev]+k<arr[n-1]&&arr[prev]+k>arr[0])
    return arr[prev]+k;
    return -1;
}
//O(n)
int KthMissingElement(int arr[], int n, int k)
{
    
    int start=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]!=start+1){
            if(k<=arr[i]-(start+1)){
                return start+k;
            }
            else{
                k-=(arr[i]-(start+1));
            }
        }
        start=arr[i];
    }
    return -1;
}