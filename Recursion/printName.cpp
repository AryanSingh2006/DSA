#include <bits/stdc++.h>
using namespace std;

void printName(int n)
{
  if (n <= 0)
  {
    return;
  }
  cout << "Aryan" << endl;
  n--;
  printName(n);
}

int main()
{
  int n;
  cout << "enter a num: ";
  cin >> n;
  printName(n);
  return 0;
}
