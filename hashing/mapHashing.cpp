#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cout << "enter the size of the array: ";
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  map<int, int> mpp;
  for (int i = 0; i < n; i++)
  {
    mpp[arr[i]]++;
  }

  int q;
  cout << "enter number of queries: ";
  cin >> q;
  while (q > 0)
  {
    int n;
    cout << "enter the number: ";
    cin >> n;
    cout << mpp[n] << endl;
    q--;
  }
  return 0;
}