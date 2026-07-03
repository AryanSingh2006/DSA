#include <bits/stdc++.h>
using namespace std;

void sumOfN(int sum, int n)
{
  if (n < 1)
  {
    cout << sum;
    return;
  }
  sum = sum + n;
  n--;
  sumOfN(sum, n);
}

int main()
{
  int num;
  cout << "enter a num: ";
  cin >> num;
  sumOfN(0, num);
  return 0;
}