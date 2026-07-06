#include <bits/stdc++.h>
using namespace std;

int main()
{
  string s;
  cout << "enter a string: ";
  cin >> s;

  int hash[256] = {0};
  for (int i = 0; i < s.size(); i++)
  {
    hash[s[i]]++;
  }

  int q;
  cout << "enter number of queries: ";
  cin >> q;
  while (q > 0)
  {
    char ch;
    cout << "enter a char: ";
    cin >> ch;
    cout << hash[ch] << endl;
    q--;
  }
}