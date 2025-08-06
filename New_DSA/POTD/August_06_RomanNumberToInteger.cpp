int romanToDecimal(string &s)
{
  // code here
  int i = 0;
  int ans = 0;
  while (i < s.length())
  {
    char a = s[i];
    switch (a)
    {
    case 'I':
      if (i + 1 < s.length() && s[i + 1] == 'V')
      {
        ans += 4;
        i++;
      }
      else if (i + 1 < s.length() && s[i + 1] == 'X')
      {
        ans += 9;
        i++;
      }
      else
      {
        ans += 1;
      }
      break;
    case 'X':
      if (i + 1 < s.length() && s[i + 1] == 'L')
      {
        ans += 40;
        i++;
      }
      else if (i + 1 < s.length() && s[i + 1] == 'C')
      {
        ans += 90;
        i++;
      }
      else
      {
        ans += 10;
      }
      break;
    case 'C':
      if (i + 1 < s.length() && s[i + 1] == 'D')
      {
        ans += 400;
        i++;
      }
      else if (i + 1 < s.length() && s[i + 1] == 'M')
      {
        ans += 900;
        i++;
      }
      else
      {
        ans += 100;
      }
      break;
    case 'V':
      ans += 5;
      break;
    case 'L':
      ans += 50;
      break;
    case 'D':
      ans += 500;
      break;
    case 'M':
      ans += 1000;
      break;
    }
    i++;
  }
  return ans;
}