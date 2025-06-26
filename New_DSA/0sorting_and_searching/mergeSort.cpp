void merge(int input[], int s, int mid, int e)
{
  int i = 0, j = 0;
  int size1 = mid - s + 1;
  int size2 = e - mid;
  int part1[size1];
  int part2[size2];
  for (i = 0; i < size1; i++)
  {
    part1[i] = input[s + i];
  }
  for (j = 0; j < size2; j++)
  {
    part2[j] = input[j + mid + 1];
  }
  int k = s;
  i = 0;
  j = 0;
  while (i < size1 && j < size2)
  {
    if (part1[i] < part2[j])
    {
      input[k] = part1[i];
      i++;
      k++;
    }
    else
    {
      input[k] = part2[j];
      j++;
      k++;
    }
  }
  while (i < size1)
  {
    input[k] = part1[i];
    k++;
    i++;
  }
  while (j < size2)
  {
    input[k] = part2[j];
    k++;
    j++;
  }
}
void merge_sort(int input[], int start, int end)
{
  if (start < end)
  {
    int mid = (start + end) / 2;
    merge_sort(input, start, mid);
    merge_sort(input, mid + 1, end);
    merge(input, start, mid, end);
  }
}
void mergeSort(int input[], int n)
{
  merge_sort(input, 0, n - 1);
}
