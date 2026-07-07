#include <bits/stdc++.h>
using namespace std;

bool isAnagram(string s, string t)
{
  map<int, int> mpp1;
  map<int, int> mpp2;
  for (char c : s)
  {
    mpp1[c]++;
  }
  for (char c : t)
  {
    mpp2[c]++;
  }
  return mpp1 == mpp2;
}

int main()
{
  string s;
  string t;
  cout << "enter a string: ";
  cin >> s;
  cout << "enter another string: ";
  cin >> t;
  cout << isAnagram(s, t);
}