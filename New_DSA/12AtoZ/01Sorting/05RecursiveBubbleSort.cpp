void helper(vector<int>& arr,int j, int n){
    if(j==n)return ;
    if(arr[j]<arr[j-1]){
        int t=arr[j];
        arr[j]=arr[j-1];
        arr[j-1]=t;
    }
    helper(arr,j+1,n);
} 
void bubbleSort(vector<int>& arr, int n) 
{
    //write your code here
        for(int i=0;i<arr.size();i++){
          helper(arr,1,n-i);
        }
}