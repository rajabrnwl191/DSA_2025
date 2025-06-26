//case 1 simply sort the array in ascending order 
void SelectionSort(int arr[], int n)
{
  for (int i = 0; i < n; i++)
  {
    int min = i;
    for (int j = i + 1; j < n; j++)
    {
      if (arr[j] < arr[min])
      {
        min = j;
      }
    }
    int temp = arr[i];
    arr[i] = arr[min];
    arr[min] = temp;
  }
}
// case 2: if we have to sort in descending order 
//then only difference will be calculate maximum instead of minimum element
// void SelectionSort(int arr[], int n)
// {
//   for (int i = 0; i < n; i++)
//   {
//     int max = i;
//     for (int j = i + 1; j < n; j++)
//     {
//       if (arr[j] > arr[min])
//       {
//         max = j;
//       }
//     }
//     int temp = arr[i];
//     arr[i] = arr[max];
//     arr[max] = temp;
//   }
// }

// case3:- if we have to sort in descending order but by calculating minimum element 
//then the outer loop run from last to first 
// void SelectionSort(int arr[], int n)
// {
//   for (int i = n-1;i>=0;i--)
//   {
//     int min = i;
//     for (int j = 0; j < n-1; j++)
//     {
//       if (arr[j] < arr[min])
//       {
//         in = j;
//       }
//     }
//     int temp = arr[i];
//     arr[i] = arr[min];
//     arr[min] = temp;
//   }
// }

// case3:- if we have to sort in ascending order
// but by calculating maximum element without changing the order of loop 
//then take a variable k=last index=n-1;
// void SelectionSort(int arr[], int n)
// {
  // int k=n-1;
//   for (int i = 0; i <=k; i++)
//   {
//     int min = i;
//     for (int j =0; j < n-i; j++)
//     {
//       if (arr[j] < arr[min])
//       {
//         min = j;
//       }
//     }
//     int temp = arr[i];
//     arr[i] = arr[min];
//     arr[min] = temp;
//   }
// }



