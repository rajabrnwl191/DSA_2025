bool isPalinSent(string &s)
{
  // code here
  int i = 0, j = s.size() - 1;
  while (i < j)
  {
    if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= '0' && s[i] <= '9'))
    {
      if ((s[j] >= 'a' && s[j] <= 'z') || (s[j] >= 'A' && s[j] <= 'Z') || (s[j] >= '0' && s[j] <= '9'))
      {
        char x = tolower(s[i]), y = tolower(s[j]);
        if (x != y)
          return false;
        else
        {
          i++;
          j--;
        }
      }
      else
        j--;
    }
    else
      i++;
  }
  return true;
}