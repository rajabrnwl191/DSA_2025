int duplicateNumber(int *arr, int size)
{
  // Write your code here
  int t = 0, x = 0;
  for (int i = 0; i < size; i++)
  {
    t = t ^ arr[i];
  }

  for (int i = 1; i < size - 1; i++)
  {
    x ^= i;
  }
  return (x ^ t);
}

int duplicateNumber(int arr[], int size)
{
  for (int i = 0; i < size - 1; ++i)
  {
    for (int j = i + 1; j < size; ++j)
    {
      if (arr[i] == arr[j])
      {
        return arr[i];
      }
    }
  }
}
// java
public
class Solution
{
  /*
  The given approach is not the best possible solution.
  A better way will be taught later in the course once we
  cover the Time/Space Complexity in the Data Structures and
  Algorithms part
  */
public
  static int duplicateNumber(int arr[])
  {
    for (int i = 0; i < (arr.length - 1); ++i)
    {
      for (int j = i + 1; j < arr.length; ++j)
      {
        if (arr[i] == arr[j])
        {
          return arr[i];
        }
      }
    }
    /*
    The function would never return from this line
    since the input array always contains a duplicate value.
    To avoid the ambiguity at the compile time,
    the function necessarily has to return a value in case
    the line number 15 doesn't return the desired value during
    the execution of the for loop.
    */
    return Integer.MAX_VALUE;
  }
}