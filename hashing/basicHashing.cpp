#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  int arr[n];
  cout << "enter the size of the array: ";
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    cout << "enter " << i + 1 << "number: ";
    cin >> arr[i];
  }

  //can only hash the number till 12
  int hash[13] = {0};
  for (int i = 0; i < 13; i++)
  {
    hash[arr[i]] += 1;
  }
  int m;
  cout << "enter a number: ";
  cin >> m;
  while (m > 0)
  {
    int num;
    cin >> num;
    cout << hash[num] << endl;
    m--;
  }
  return 0;
}