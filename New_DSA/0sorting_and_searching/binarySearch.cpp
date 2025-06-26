#include <iostream>
using namespace std;

int binarysearch(int arr[], int s, int e, int key)
{
  if (s >= e)
    return -1;
  int mid = (s + e) / 2;
  if (arr[mid] == key)
    return mid;
  else if (arr[mid] > key)
    e = mid - 1;
  else
    s = mid + 1;
}
int main()
{
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  int key;
  cin >> key;
  int ans = binarysearch(arr, 0, n, key);
  if (ans != -1)
    cout << "key found at position " << ans + 1;
  else
    cout << "element is not found" << endl;
  return 0;
}