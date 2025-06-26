void insertionSort(int arr[], int n)
{
    //write your code here
            for(int i=1;i<n;i++){
              int j = i - 1;
              int mini=arr[i];
              while( j >=0&&arr[j]>mini)  {
                  arr[j+1]=arr[j];
                  j--;
              }
              arr[j+1]=mini;
            }
}