#include <bits/stdc++.h>
using namespace std;

bool isPowerOfThree(int n)
{
  if (n <= 0)
  {
    return false;
  }
  while (n > 1)
  {
    if (n % 3 == 0)
    {
      n = n / 3;
    }
    else
    {
      return false;
    }
  }
  return true;
}

int main()
{
  int num;
  cout << "enter a num: ";
  cin >> num;
  bool result = isPowerOfThree(num);
  cout << result;
  return 0;
}