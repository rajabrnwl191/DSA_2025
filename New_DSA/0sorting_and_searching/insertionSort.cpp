void InsertionSort(int arr[], int n)
{
  for (int i = 1; i < n; i++)
  {
    int element = arr[i];
    int j = i - 1;
    while(j>=0&&(arr[j] > element)){
        arr[j + 1] = arr[j];
        j--;
    }
    arr[j + 1] = element;
  }
}