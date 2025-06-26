/*
The given approach is not the best possible solution.
A better solution will be discussed later once we learn about
Time & Space Complexity in the Data Structures and Algorithms
part of the course.
*/
int pairSum(int *input, int size, int x)
{
  int numPairs = 0;
  for (int i = 0; i < size; i++)
  {
    for (int j = i + 1; j < size; j++)
    {
      if (input[i] + input[j] == x)
      {
        ++numPairs;
      }
    }
  }
  return numPairs;
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
  static int pairSum(int arr[], int x)
  {
    int numPairs = 0;
    for (int i = 0; i < arr.length; i++)
    {
      for (int j = i + 1; j < arr.length; j++)
      {
        if (arr[i] + arr[j] == x)
        {
          numPairs += 1;
        }
      }
    }
    return numPairs;
  }
}