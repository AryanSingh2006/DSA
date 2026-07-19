#include <bits/stdc++.h>
using namespace std;

int secondLargest(int arr[], int n)
{
  int largest = arr[0];
  int sl = INT_MIN;
  for (int i = 0; i < n; i++)
  {
    if (arr[i] > largest)
    {
      sl = largest;
      largest = arr[i];
    }
    if (arr[i] > sl && arr[i] != largest)
    {
      sl = arr[i];
    }
  }
  return sl;
}

int main()
{
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  cout << secondLargest(arr, n);
}