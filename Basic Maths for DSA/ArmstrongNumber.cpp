#include <bits/stdc++.h>
using namespace std;

bool isArmstrongNumber(int x)
{
  int realNum = x;
  int count = 0;
  int sum = 0;
  int lastDigit;
  while (x != 0)
  {
    count++;
    x = x / 10;
  }
  x = realNum;
  while (x != 0)
  {
    lastDigit = x % 10;
    sum = sum + pow(lastDigit, count);
    x = x / 10;
  }
  if (sum == realNum)
  {
    return true;
  }
  else
  {
    return false;
  }
}

int main()
{
  int x;
  cout << "enter a number: ";
  cin >> x;
  cout << isArmstrongNumber(x);
  return 0;
}