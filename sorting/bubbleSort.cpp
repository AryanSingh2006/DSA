#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int n, int ar[])
{
  for (int i = n - 1; i >= 1; i--)
  {
    bool didSwap = false;
    for (int j = 0; j < i; j++)
    {
      if (ar[j] > ar[j + 1])
      {
        swap(ar[j], ar[j + 1]);
        didSwap = true;
      }
    }
    if (!didSwap)
    {
      break;
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

  bubbleSort(n, ar);
  return 0;
}