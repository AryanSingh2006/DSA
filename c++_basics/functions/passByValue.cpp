#include <bits/stdc++.h>
using namespace std;

void doSomething(int a)
{
  cout << a << endl;
  a++;
  cout << a << endl;
  a++;
  cout << a << endl;
}

int main()
{
  int a = 10;
  doSomething(a);
  //here the value of a will be printed as 10 not 12, this is due to pass by value
  cout << a;
  return 0;
}