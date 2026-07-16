#include <bits/stdc++.h>
using namespace std;

vector<int> merge(int arr[], int low, int mid, int higf)
{
  return;
}

vector<int> mergeSort(int arr[], int low, int high)
{
  if (low == high)
  {
    return;
  }
  int mid = (low + high) / 2;
  mergeSort(arr, low, mid);
  mergeSort(arr, mid, high);
  merge(arr, low, mid, high);
}

int main()
{
  int n;
  cout << "enter the lenght of the array: ";
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    cout << "enter the " << i + 1 << " num of the array:";
    cin >> arr[i];
  }
  mergeSort(arr, arr[0], arr[n - 1]);
}