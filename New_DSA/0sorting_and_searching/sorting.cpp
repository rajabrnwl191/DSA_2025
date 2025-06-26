#include <iostream>
#include "selectionSort.cpp"
#include "bubbleSort.cpp"
#include "insertionSort.cpp"
#include "mergeSort.cpp"
#include "heapSort.cpp"
#include "improve_bubble_sort.cpp"
#include "quick_sort.cpp"
#include "count_sort.cpp"
using namespace std;

void print(int arr[], int n)
{
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
}
int main()
{
  int n = 7;
  // cout << "Enter the size of array :" << endl;
  // cin >> n;
  int arr[n] = {1, 8, 2, 2, 6, 9, 1};
  // cout << "Enter the array element : " << endl;
  // for (int i = 0; i < n; i++)
  //   cin >> arr[i];
  int k = 0;
  cout << "Enter 1 for selectionSort :" << endl;
  cout << "Enter 2 for bubbleSort:" << endl;
  cout << "Enter 3 for insertionSort :" << endl;
  cout << "Enter 4 for mergeSort :" << endl;
  cout << "Enter 5 for countSort :" << endl;
  cout << "Enter 6 for heapSort :" << endl;
  cout << "Enter 7 for ImproveBubbleSort :" << endl;
  cout << "Enter 8 for quickSort :" << endl;
  cin >> k;
  cout << "Before Sorting :" << endl;
  print(arr, n);
  switch (k)
  {
  case 1:
    SelectionSort(arr, n);
    break;
  case 2:
    BubbleSort(arr, n);
    break;
  case 3:
    InsertionSort(arr, n);
    break;
  case 4:
    mergeSort(arr, n);
    break;
  case 5:
    count_sort(arr, n);
    break;

  case 6:
    heapSort(arr, n);
    break;
  case 7:
    ImproveBubbleSort(arr, n);
    break;
  }
  cout << "after Sorting :" << endl;
  print(arr, n);
  return 0;
}