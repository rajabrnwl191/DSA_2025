#include <iostream>
using namespace std;
void count_sort(int arr[], int N)
{
  int maxi = arr[0];
  for (int i = 0; i < N; i++)
  {
    if (arr[i] > maxi)
      maxi = arr[i];
  }
  int count[maxi + 1];
  int b[N];
  for (int i = 0; i <= maxi; i++)
  {
    count[i] = 0;
  }
  for (int i = 0; i < N; i++)
  {
    count[arr[i]]++;
  }
  for (int i = 1; i <= maxi; i++)
  {
    count[i] = count[i] + count[i - 1];
  }
  for (int i = N - 1; i >= 0; i--)
  {
    b[--count[arr[i]]] = arr[i];
  }

  for (int i = 0; i < N; i++)
  {
    arr[i] = b[i];
  }
}