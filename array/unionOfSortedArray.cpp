#include <bits/stdc++.h>
using namespace std;

void UnionSortedArray(int arr1[], int arr2[], int n, int m)
{
  int i = 0;
  int j = 0;

  vector<int> vc;

  while (i < n && j < m)
  {
    if (arr1[i] <= arr2[j])
    {
      if (vc.empty() || vc.back() != arr1[i])
      {
        vc.push_back(arr1[i]);
      }
      i++;
    }
    else
    {
      if (vc.empty() || vc.back() != arr2[j])
      {
        vc.push_back(arr2[j]);
      }
      j++;
    }
  }

  while (i < n)
  {
    if (vc.empty() || vc.back() != arr1[i])
    {
      vc.push_back(arr1[i]);
    }
    i++;
  }

  while (j < m)
  {
    if (vc.empty() || vc.back() != arr2[j])
    {
      vc.push_back(arr2[j]);
    }
    j++;
  }

  cout << "Union Array: ";

  for (auto val : vc)
  {
    cout << val << " ";
  }

  cout << endl;
}

int main()
{
  int n;
  cout << "Enter the size of the first array: ";
  cin >> n;

  int arr1[n];

  cout << "Enter the elements of the first sorted array:\n";
  for (int i = 0; i < n; i++)
  {
    cin >> arr1[i];
  }

  int m;
  cout << "Enter the size of the second array: ";
  cin >> m;

  int arr2[m];

  cout << "Enter the elements of the second sorted array:\n";
  for (int i = 0; i < m; i++)
  {
    cin >> arr2[i];
  }

  UnionSortedArray(arr1, arr2, n, m);

  return 0;
}