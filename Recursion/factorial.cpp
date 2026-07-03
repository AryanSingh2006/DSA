#include <bits/stdc++.h>
using namespace std;

int printFactorial(int n)
{
  if (n == 1)
  {
    return 1;
  }
  return n * printFactorial(n - 1);
}

int main()
{
  int num;
  cout << "enter a num: ";
  cin >> num;
  cout << printFactorial(num);
}