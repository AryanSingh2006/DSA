#include <bits/stdc++.h>
using namespace std;

void selectionSort(int n, int ar[])
{

  // sorting loop
  for (int i = 0; i < n - 1; i++)
  {
    int minIndex = i;

    // Finding minimum in the array
    for (int j = i; j < n; j++)
    {
      if (ar[minIndex] > ar[j])
        minIndex = j;
    }
    // Swapping the minimum with the current index value
    int temp = ar[i];
    ar[i] = ar[minIndex];
    ar[minIndex] = temp;
  }

  for (int i = 0; i < n; i++)
  {
    cout << ar[i] << endl;
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

  selectionSort(n, ar);
  return 0;
}