#include <sys/time.h>
#include <iostream>
#include <algorithm>
using namespace std;

long getTimeinMicroSeconds()
{
  struct timeval start;
  gettimeofday(&start, NULL);
  return start.tv_sec * 1000000 + start.tv_usec;
}

// int findDuplicate(int *arr, int n)
// {
//   int unique = 0;
//   int sum = (n - 2) * (n - 1) / 2;
//   for (int i = 0; i < n; i++)
//   {
//     unique += arr[i];
//   }
//   unique = unique - sum;
//   return unique;
//   // Write your code here
// }

int pairSum(int *arr, int n, int num)
{
  sort(arr, arr + n);
  int count = 0;
  int start = 0, end = n - 1;
  while (start <= end)
  {
    if (arr[start] + arr[end] < num)
      start++;
    else if (arr[start] + arr[end] > num)
      end--;
    else
    {
      int ElementAtStart = arr[start];
      int ElementAtEnd = arr[end];
      if (ElementAtStart == ElementAtEnd)
      {
        int totalsizeFSTE = end - start + 1;
        count += (totalsizeFSTE * (totalsizeFSTE - 1)) / 2;
        return count;
      }
      int tempStart = start + 1;
      int tempEnd = end - 1;
      while (tempStart <= tempEnd && arr[tempStart] == ElementAtStart)
      {
        tempStart += 1;
      }
      while (tempStart <= tempEnd && arr[tempEnd] == ElementAtEnd)
      {
        tempEnd -= 1;
      }
      count += (tempStart - start) * (end - tempEnd);
      start = tempStart;
      end = tempEnd;
    }
  }
  return count;
}

int pairSum2(int *arr, int n, int num)
{
  int count = 0;
  for (int i = 0; i < n; i++)
  {
    for (int j = i + 1; j < n; j++)
    {
      if (arr[i] + arr[j] == num)
        count++;
    }
  }
  return count;
  // Write your code here
}

int main()
{

  int arr[] = {0, 0, 6, 0};
  long starttime, endtime;
  starttime = getTimeinMicroSeconds();
  int uni = pairSum(arr, 4, 6);
  cout << uni << endl;
  endtime = getTimeinMicroSeconds();
  cout << "Time taken is " << endtime - starttime << " " << endl;
  starttime = getTimeinMicroSeconds();
  int uni2 = pairSum2(arr, 4, 6);
  cout << uni2 << endl;
  endtime = getTimeinMicroSeconds();
  cout << "Time taken is " << endtime - starttime << " " << endl;
}