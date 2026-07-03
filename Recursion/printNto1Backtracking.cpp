#include <bits/stdc++.h>
using namespace std;

void printNto1(int i, int n)
{
  if (i > n)
  {
    return;
  }
  printNto1(i + 1, n);
  cout << i << endl;
}

int main()
{
  int n;
  cout << "enter a num: ";
  cin >> n;
  printNto1(1, n);
  return 0;
}