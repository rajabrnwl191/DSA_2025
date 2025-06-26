#include <iostream>
using namespace std;

void heapSort(int arr[], int n)
{
  // Write your code

  for (int index = 1; index < n; index++)
  {
    int CI = index;
    while (CI > 0)
    {
      int PI = (CI - 1) / 2;
      if (arr[CI] > arr[PI])
      {
        int temp = arr[CI];
        arr[CI] = arr[PI];
        arr[PI] = temp;
      }
      else
        break;
      CI = PI;
    }
  }
  int lastIndex = n - 1;
  while (lastIndex > 0)
  {

    int temp = arr[0];
    arr[0] = arr[lastIndex];
    arr[lastIndex] = temp;
    lastIndex--;

    int PI = 0;
    int LCI = 2 * PI + 1;
    int RCI = 2 * PI + 2;
    while (LCI <= lastIndex)
    {

      int min = PI;
      if (arr[LCI] > arr[min])
        min = LCI;
      if (RCI <= lastIndex && arr[RCI] > arr[min])
        min = RCI;
      if (min == PI)
        break;
      int temp = arr[PI];
      arr[PI] = arr[min];
      arr[min] = temp;
      PI = min;
      RCI = 2 * PI + 2;
      LCI = 2 * PI + 1;
    }
  }
}