#include <bits/stdc++.h>
using namespace std;

int pi(int arr[], int low, int high)
{
  int i = low;
  int j = high;
  int pivot = arr[low];

  while (i < j)
  {
    while (arr[i] <= pivot && i <= high - 1)
    {
      i++;
    }
    while (arr[j] > pivot && j > low - 1)
    {
      j--;
    }
    if (i < j)
    {
      swap(arr[i], arr[j]);
    }
  }
  swap(arr[low], arr[j]);
  return j;
}

void qs(int arr[], int low, int high)
{
  if (low < high)
  {
    int partitionIndex = pi(arr, low, high);
    qs(arr, low, partitionIndex - 1);
    qs(arr, partitionIndex + 1, high);
  }
}

int main()
{
  int n;
  cout << "enter the size of the array: ";
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    cout << "enter number: ";
    cin >> arr[i];
  }
  qs(arr, 0, n - 1);
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  return 0;
}