void bubbleSort(vector<int>& arr, int n) 
{
    //write your code here
        for(int i=0;i<arr.size();i++){
          for (int j = 1; j < arr.size()-i; j++) {
              if(arr[j]<arr[j-1]){
                  int t=arr[j];
                  arr[j]=arr[j-1];
                  arr[j-1]=t;
              }
          }
        }
}