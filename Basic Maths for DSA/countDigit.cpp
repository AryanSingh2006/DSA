#include <bits/stdc++.h>
using namespace std;

int countDigit(int num)
{
  int count = 0;
  while (num > 0)
  {
    num = num / 10;
    count++;
  }
  return count;
}

int main()
{
  int num;
  cout << "enter a number:";
  cin >> num;
  int result = countDigit(num);
  cout << "total digits are: " << result;
  return 0;
}