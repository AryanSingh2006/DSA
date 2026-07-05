#include <bits/stdc++.h>
using namespace std;

/*
int fib(int n) {
        if (n <= 1) {
            return n;
        }
        int prev1 = 0;
        int prev2 = 1;
        for (int i = 2; i <= n; i++) {
            int sum = prev1 + prev2;
            prev1 = prev2;
            prev2 = sum;
        }
        return prev2;
    }
*/

int fib(int n)
{
  if (n <= 1)
  {
    return n;
  }
  return fib(n - 1) + fib(n - 2);
}

int main()
{
  int n;
  cout << "enter a num: ";
  cin >> n;
  int result = fib(n);
  cout << result;
  return 0;
}