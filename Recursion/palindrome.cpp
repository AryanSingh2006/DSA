#include <bits/stdc++.h>
using namespace std;

bool check(string &s, int l, int r)
{
  if (l >= r)
  {
    return true;
  }
  if (s[l] != s[r])
  {
    return false;
  }
  return check(s, l + 1, r - 1);
}

bool isPalindrome(string s)
{
  std::erase_if(s, [](char c)
                { return !isalnum(c); });

  for (char &c : s)
  {
    c = tolower(c);
  }

  int l = 0;
  int r = s.size() - 1;
  return check(s, l, r);
}

int main()
{
  string text;
  cout << "enter a string: ";
  getline(cin, text);
  cout << isPalindrome(text);
  return 0;
}