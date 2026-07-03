#include <bits/stdc++.h>
using namespace std;

int printSumofN(int n)
{
  if (n < 1)
  {
    return 0;
  }
  return n + printSumofN(n - 1);
}

int main()
{
  int n;
  cout << "enter a num: ";
  cin >> n;
  cout << printSumofN(n);
  return 0;
}