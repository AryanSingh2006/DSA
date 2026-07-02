#include <bits/stdc++.h>
using namespace std;

vector<int> selfDividingNumbers(int left, int right)
{
  int n;
  vector<int> vc;
  for (left; left <= right; left++)
  {
    bool push = true;
    n = left;
    while (n > 0)
    {
      int ld = n % 10;
      if (ld == 0 || left % ld != 0)
      {
        push = false;
        break;
      }
      n = n / 10;
    }
    if (push)
    {
      vc.push_back(left);
    }
  }
  return vc;
}

int main()
{
  int left;
  int right;
  cout << "enter left: ";
  cin >> left;
  cout << "enter right: ";
  cin >> right;
  vector<int> result = selfDividingNumbers(left, right);
  for (int i : result)
  {
    cout << i << " ";
  }
}