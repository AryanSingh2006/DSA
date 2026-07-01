#include <bits/stdc++.h>
using namespace std;

int LCM(int a, int b)
{
  int gcd;
  int a1 = a;
  int b1 = b;
  while (a > 0 && b > 0)
  {
    if (a > b)
    {
      a = a % b;
    }
    else
    {
      b = b % a;
    }
  }
  if (a == 0)
  {
    gcd = b;
  }
  else
  {
    gcd = a;
  }

  return a1 * b1 / gcd;
}

int main()
{
  int a;
  int b;
  int result;
  cout << "enter num1: ";
  cin >> a;
  cout << "enter num2: ";
  cin >> b;
  result = LCM(a, b);
  cout << result;
}