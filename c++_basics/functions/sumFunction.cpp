#include <bits/stdc++.h>
using namespace std;

int sum(int a, int b){
  return a+b;
}

int main()
{

  int a, b;
  cout << "enter 1st number: ";
  cin >> a;
  cout << "enter 2nd number: ";
  cin >> b;

  int result = sum(a,b);
  cout<<"the sum is "<< result;
  return 0;
}