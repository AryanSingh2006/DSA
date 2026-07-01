#include <bits/stdc++.h>
using namespace std;

void getAllDivisors(int n)
{
  vector<int> v;
  int i = 1;
  while (i * i <= n)
  {
    if (n % i == 0)
    {
      v.push_back(i);
      if (n / i != i)
      {
        v.push_back(n / i);
      }
    }
    i++;
  }
  sort(v.begin(), v.end());
  for (int i : v)
  {
    cout << i << " ";
  }
}

int main()
{
  int n;
  cout << "enter a num: ";
  cin >> n;
  getAllDivisors(n);
  return 0;
}