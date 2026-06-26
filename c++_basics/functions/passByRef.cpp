#include <bits/stdc++.h>
using namespace std;

void doSomething(int &a)
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
  //here the printed value will be 12 and not 10 cause in the function parameter we are passing
  //the reference of the int, this is called as pass by reference
  cout << a;
  return 0;
}