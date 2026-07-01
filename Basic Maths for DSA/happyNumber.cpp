#include <bits/stdc++.h>
using namespace std;

bool isHappy(int n)
{
  int ld;
  int sum = 0;
  set<int> st;

  while (n > 0)
  {
    sum = 0;
    while (n > 0)
    {
      ld = n % 10;
      sum = sum + (ld * ld);
      n = n / 10;
    }
    if (st.find(sum) != st.end())
    {
      return false;
    }
    st.insert(sum);
    if (sum == 1)
    {
      return true;
    }
    n = sum;
  }
  return false;
}

int main()
{
  int num;
  cout << "enter a num: ";
  cin >> num;
  cout << isHappy(num);
  return 0;
}