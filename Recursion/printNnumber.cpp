#include <bits/stdc++.h>
using namespace std;

void printNnumbers(int i, int n)
{
  if (i > n)
  {
    return;
  }
  cout << i << endl;
  i++;
  printNnumbers(i, n);
}

int main()
{
  int n;
  cout << "enter a num: ";
  cin >> n;
  printNnumbers(1, n);
  return 0;
}