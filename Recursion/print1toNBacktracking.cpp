#include <bits/stdc++.h>
using namespace std;

void print1toN(int i)
{
  if (i < 1)
  {
    return;
  }
  print1toN(i - 1);
  cout << i << endl;
}

int main()
{
  int n;
  cout << "enter a num: ";
  cin >> n;
  print1toN(n);
  return 0;
}