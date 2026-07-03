#include <bits/stdc++.h>
using namespace std;

void reverseArray(int ar[], int l, int r)
{
  if (l >= r)
  {
    return;
  }
  int n = ar[l];
  ar[l] = ar[r];
  ar[r] = n;
  reverseArray(ar, l + 1, r - 1);
}

int main()
{
  int arraySize;
  cout << "enter the size of the array: ";
  cin >> arraySize;
  int ar[arraySize];
  for (int i = 0; i < arraySize; i++)
  {
    cout << "enter " << i + 1 << " num: ";
    cin >> ar[i];
  }
  reverseArray(ar, 0, arraySize - 1);
  for (int i : ar)
  {
    cout << i << " ";
  }
  return 0;
}