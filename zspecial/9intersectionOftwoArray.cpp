

int pairSum(int *input, int size, int x)
{
  sort(input, input + size);
  int count = 0;
  int ptr1 = 0, ptr2 = size - 1;
  for (int i = 0; i < size - 1; i++)
  {
    if (input[ptr1] + input[ptr2] == x)
      count++;
    else if ()
  }
  return count;
  // Write your code here
}
/*
The given approach is not the best possible solution.
A better solution will be discussed later once we learn about
Time & Space Complexity in the Data Structures and Algorithms
part of the course.
*/
#include <climits>
void intersection(int *input1, int *input2, int size1, int size2)
{
  for (int i = 0; i < size1; i++)
  {
    for (int j = 0; j < size2; j++)
    {
      if (input1[i] == input2[j])
      {
        cout << input1[i] << " ";
        input2[j] = INT_MIN;
        break;
      }
    }
  }
}
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
  static void intersections(int arr1[], int arr2[])
  {
    for (int i = 0; i < arr1.length; i++)
    {
      for (int j = 0; j < arr2.length; j++)
      {
        if (arr1[i] == arr2[j])
        {
          System.out.print(arr1[i] + " ");
          arr2[j] = Integer.MIN_VALUE;
          break;
        }
      }
    }
  }
}