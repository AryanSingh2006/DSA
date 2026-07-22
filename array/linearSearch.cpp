  #include <bits/stdc++.h>
  using namespace std;

  int linearSearch(int arr[], int n, int targer)
  {
    for (int i = 0; i < n; i++)
    {
      if (arr[i] == targer)
      {
        return i;
      }
    }
    return -1;
  }

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
    int target;
    cout << "enter the target number: ";
    cin >> target;
    int result = linearSearch(arr, n, target);
    cout << result;
  }