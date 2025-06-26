void sortZeroesAndOne(int *input, int size)
{
  int num_of_zeros = 0, num_of_ones = 0;
  for (int i = 0; i < size; i++)
  {
    if (input[i] == 0)
    {
      num_of_zeros++;
    }
    if (input[i] == 1)
    {
      num_of_ones++;
    }
  }
  for (int i = 0; i < size; i++)
  {
    if (i < num_of_zeros)
    {
      input[i] = 0;
    }
    else
      input[i] = 1;
  }
  // Write your code here
}
void sortZeroesAndOne(int *input, int size)
{
  int k = 0, temp = 0;
  for (int i = 0; i < size; i++)
  {
    if (input[i] == 0)
    {
      temp = input[k];
      input[k] = input[i];
      input[i] = temp;
      k++;
    }
  }

  // Write your code here
}