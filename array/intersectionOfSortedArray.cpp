#include <bits/stdc++.h>
using namespace std;

void intersectonOfSortedArray(int arr1[], int arr2[], int n, int m)
{
  int i = 0;
  int j = 0;
  vector<int> vc;
  while (i < n && j < m)
  {
    if (arr1[i] == arr2[j])
    {
      if (vc.empty() || vc.back() != arr1[i])
      {
        vc.push_back(arr1[i]);
      }
      i++;
      j++;
    }
    else if (arr1[i] < arr2[j])
    {
      i++;
    }
    else
    {
      j++;
    }
  }

  for (auto &val : vc)
  {
    cout << val << " ";
  }
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

  intersectonOfSortedArray(arr1, arr2, n, m);

  return 0;
}