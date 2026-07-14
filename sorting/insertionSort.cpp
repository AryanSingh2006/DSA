#include <bits/stdc++.h>
using namespace std;

void insertionSort(int n, int ar[])
{
  for (int i = 1; i < n; i++)
  {
    for (int j = i; j > 0; j--)
    {
      if (ar[j] < ar[j - 1])
      {
        swap(ar[j], ar[j - 1]);
      }
      else
      {
        break;
      }
    }
  }

  for (int i = 0; i < n; i++)
  {
    cout << ar[i] << " ";
  }
}

int main()
{
  int n;
  int ar[5];
  cout << "enter the size of the array: ";
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    cout << "enter the " << i + 1 << " number: ";
    cin >> ar[i];
  }

  insertionSort(n, ar);
  return 0;
}