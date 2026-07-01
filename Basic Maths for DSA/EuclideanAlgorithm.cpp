#include <bits/stdc++.h>
using namespace std;

int GCD(int num1, int num2)
{
  while (num1 > 0 && num2 > 0)
  {
    if (num1 > num2)
    {
      num1 = num1 % num2;
    }
    else
    {
      num2 = num2 % num1;
    }
  }
  if (num1 == 0)
  {
    return num2;
  }
  else
  {
    return num1;
  }
  return 0;
}

int main()
{
  int num1;
  int num2;
  cout << "enter num1: ";
  cin >> num1;
  cout << "enter num2:";
  cin >> num2;
  int result = GCD(num1, num2);
  cout << result;
  return 0;
}