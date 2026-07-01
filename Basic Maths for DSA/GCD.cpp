#include <bits/stdc++.h>
using namespace std;

int GCD(int num1, int num2)
{
  int n;
  if (num1 > num2)
  {
    n = num2;
  }
  else
  {
    n = num1;
  }
  for (int i = n; i >= 1; i--)
  {
    if (num1 % i == 0 && num2 % i == 0)
    {
      return i;
    }
  }
  return 0;
}

int main()
{
  int num1;
  int num2;
  cout << "enter num 1: ";
  cin >> num1;
  cout << "enter num 2: ";
  cin >> num2;
  int result = GCD(num1, num2);
  cout << result;
  return 0;
}