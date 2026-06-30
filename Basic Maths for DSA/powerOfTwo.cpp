#include <bits/stdc++.h>
using namespace std;

bool isPowerOfTwo(int n)
{
  if (n <= 0)
  {
    return false;
  }
  while (n != 1)
  {
    if (n % 2 == 0)
    {
      n = n / 2;
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
  int n;
  cout << "enter a number: ";
  cin >> n;
  cout << isPowerOfTwo(n);
}