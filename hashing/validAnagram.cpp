#include <bits/stdc++.h>
using namespace std;

// bool isAnagram(string s, string t)
// {
//   map<int, int> mpp1;
//   map<int, int> mpp2;
//   for (char c : s)
//   {
//     mpp1[c]++;
//   }
//   for (char c : t)
//   {
//     mpp2[c]++;
//   }
//   return mpp1 == mpp2;
// }

bool isAnagram(string s, string t)
{
  int hash[26] = {0};
  if (s.size() != t.size())
    return false;
  for (int i = 0; i < s.size(); i++)
  {
    hash[s[i] - 'a']++;
    hash[t[i] - 'a']--;
  }
  for (int i = 0; i < 26; i++)
  {
    if (hash[i] != 0)
    {
      return false;
    }
  }
  return true;
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