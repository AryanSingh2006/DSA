#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(int x)
{
  if (x < 0)
  {
    return false;
  }
  int realNum = x;
  int revNum = 0;
  while (x != 0)
  {
    int lastDigit = x % 10;
    if (revNum > INT_MAX / 10 || revNum < INT_MIN / 10)
    {
      return 0;
    }
    revNum = revNum * 10 + lastDigit;
    x = x / 10;
  }
  if (realNum == revNum)
  {
    return true;
  }
  else
    return false;
}
int main()
{
  int x;
  cout << "enter a number: ";
  cin >> x;
  cout << isPalindrome(x);
  return 0;
}