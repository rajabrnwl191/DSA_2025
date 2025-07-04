
     int partition (int arr[], int low, int high)
    {
       // Your code here
       int pivot=arr[high];
       int i=low-1;
       for(int j=low;j<high;j++){
           if(arr[j]<pivot){
               i++;
               int temp=arr[j];
               arr[j]=arr[i];
               arr[i]=temp;
           }
       }
       i++;
       int temp=arr[i];
       arr[i]=pivot;
       arr[high]=temp;
       return i;
    }
    void quickSort(int arr[], int low, int high)
    {
        if(low<high){
            int pivotIndex=partition(arr, low,high);
            
            quickSort(arr, low, pivotIndex-1);
            quickSort(arr,pivotIndex+1,high);
            
        }
        // code here
    }