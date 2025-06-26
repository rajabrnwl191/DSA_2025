int findUnique(int *arr, int size)
{
  for (int i = 0; i < size; i++)
  {
    int count = 0;
    for (int j = i + 1; j < size; j++)
    {
      if (arr[i] == arr[j])
      {
        count++;
        break;
      }
    }
    if (count == 0)
    {

      return arr[i];
    }
  }
  // Write your code here
}
int findUnique(int *arr, int size)
{
  int temp = 0;
  for (int i = 0; i < size; i++)
  {
    temp = temp ^ arr[i];
  }
  // Write your code here
  return temp;
}
int findUnique(int *arr, int size)
{

  for (int i = 0; i < size; i++)
  {
    int count = 0;
    for (int j = 0; j < size; j++)
    {
      if (i == j)
      {
        continue;
      }
      if (arr[i] == arr[j])
      {
        count++;
        break;
      }
    }
    if (count == 0)
    {

      return arr[i];
    }
  }
  // Write your code here
}
class Solution
{
public
  static int[] merge(int arr1[], int arr2[])
  {
    int[] ans = new int[arr1.length + arr2.length];
    int i = 0, j = 0, k = 0;
    while (i < arr1.length && j < arr2.length)
    {
      if (arr1[i] < arr2[j])
      {
        ans[k] = arr1[i];
        k += 1;
        i += 1;
      }
      else
      {
        ans[k] = arr2[j];
        k += 1;
        j += 1;
      }
    }
    while (i < arr1.length)
    {
      ans[k] = arr1[i];
      k += 1;
      i += 1;
    }
    while (j < arr2.length)
    {
      ans[k] = arr2[j];
      k += 1;
      j += 1;
    }
    return ans;
  }
}