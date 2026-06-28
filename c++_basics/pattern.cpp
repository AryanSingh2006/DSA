#include <bits/stdc++.h>
using namespace std;

void pattern1(int n)
{
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      cout << "*";
    }
    cout << endl;
  }
}

void pattern2(int n)
{
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j <= i; j++)
    {
      cout << "*";
    }
    cout << endl;
  }
}

void pattern3(int n)
{
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j <= i; j++)
    {
      cout << j + 1;
    }
    cout << endl;
  }
}

void pattern4(int n)
{
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j <= i; j++)
    {
      cout << i;
    }
    cout << endl;
  }
}

void pattern5(int n)
{
  for (int i = 0; i < n; i++)
  {
    for (int j = n; j > i; j--)
    {
      cout << "*";
    }
    cout << endl;
  }
}

void pattern6(int n)
{
  for (int i = 0; i < n; i++)
  {
    for (int j = 1; j < n - i + 1; j++)
    {
      cout << j;
    }
    cout << endl;
  }
}

void pattern7(int n)
{
  for (int i = 0; i < n; i++)
  {
    // space
    for (int j = 0; j < n - i - 1; j++)
    {
      cout << " ";
    }
    // star
    for (int j = 0; j < 2 * i + 1; j++)
    {
      cout << "*";
    }
    // space
    for (int j = 0; j < n - i - 1; j++)
    {
      cout << " ";
    }
    cout << endl;
  }
}

void pattern8(int n)
{
  for (int i = 0; i < n; i++)
  {
    // space
    for (int j = 0; j < i; j++)
    {
      cout << " ";
    }
    // star
    for (int j = 0; j < 2 * n - (2 * i + 1); j++)
    {
      cout << "*";
    }
    // space
    for (int j = 0; j < i; j++)
    {
      cout << " ";
    }
    cout << endl;
  }
}

void pattern9(int n)
{
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n - i - 1; j++)
    {
      cout << " ";
    }
    for (int j = 0; j < 2 * i + 1; j++)
    {
      cout << "*";
    }
    for (int j = 0; j < n - i - 1; j++)
    {
      cout << " ";
    }
    cout << endl;
  }

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < i; j++)
    {
      cout << " ";
    }
    for (int j = 0; j < 2 * n - (2 * i + 1); j++)
    {
      cout << "*";
    }
    for (int j = 0; j < i; j++)
    {
      cout << " ";
    }
    cout << endl;
  }
}

void pattern10(int n)
{
  for (int i = 0; i < 2 * n + 1; i++)
  {
    int star = i;
    if (i > n)
      star = 2 * n - i;
    for (int j = 0; j <= star; j++)
    {
      cout << "*";
    }
    cout << endl;
  }
}

void pattern11(int n)
{
  int start = 1;
  for (int i = 0; i < n; i++)
  {
    if (i % 2 == 0)
      start = 1;
    else
      start = 0;
    for (int j = 0; j <= i; j++)
    {
      cout << start;
      start = 1 - start;
    }
    cout << endl;
  }
}

void pattern12(int n)
{
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j <= i; j++)
    {
      cout << j;
    }
    for (int j = 0; j < 2 * n - 2 * i - 2; j++)
    {
      cout << " ";
    }
    for (int j = i; j >= 0; j--)
    {
      cout << j;
    }
    cout << endl;
  }
}

void pattern13(int n)
{
  int num = 1;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j <= i; j++)
    {
      cout << num << " ";
      num++;
    }
    cout << endl;
  }
}

void pattern14(int n)
{
  for (int i = 0; i < n; i++)
  {
    for (char j = 'A'; j <= 'A' + i; j++)
    {
      cout << j;
    }
    cout << endl;
  }
}

void pattern15(int n)
{
  for (int i = 0; i < n; i++)
  {
    for (char j = 'A'; j < 'A' + n - i; j++)
    {
      cout << j;
    }
    cout << endl;
  }
}

void pattern16(int n)
{
  for (int i = 0; i < n; i++)
  {
    char ch = 'A' + i;
    for (int j = 0; j <= i; j++)
    {
      cout << ch;
    }
    cout << endl;
  }
}

void pattern17(int n)
{
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n - i - 1; j++)
    {
      cout << " ";
    }
    char ch = 'A';
    int breakpoint = (2 * i + 1) / 2; // this is the midpoint were we want to change the symmetry(simpify this by wirting i only i.e why we are using the i in the if else statement)
    for (int j = 0; j < 2 * i + 1; j++)
    {
      cout << ch;
      if (j < i)
      {
        ch++;
      }
      else
      {
        ch--;
      }
    }
    for (int j = 0; j < n - i - 1; j++)
    {
      cout << " ";
    }
    cout << endl;
  }
}

void pattern18(int n)
{
  for (int i = 0; i < n; i++)
  {
    for (char j = 'E' - i; j <= 'E'; j++)
    {
      cout << j;
    }
    cout << endl;
  }
}

void pattern19(int n)
{
  for (int i = 0; i < n; i++)
  {
    // star
    for (int j = 0; j < n - i; j++)
    {
      cout << "*";
    }
    // space
    for (int j = 0; j < 2 * i; j++)
    {
      cout << " ";
    }
    // star
    for (int j = 0; j < n - i; j++)
    {
      cout << "*";
    }
    cout << endl;
  }
  for (int i = 0; i < n; i++)
  {
    // star
    for (int j = 0; j <= i; j++)
    {
      cout << "*";
    }
    // space
    for (int j = 0; j < 2 * n - 2 * i - 2; j++)
    {
      cout << " ";
    }
    // star
    for (int j = 0; j <= i; j++)
    {
      cout << "*";
    }
    cout << endl;
  }
}

void pattern20(int n)
{
  int space = 2 * n - 2;

  for (int i = 0; i < 2 * n; i++)
  {
    int stars;

    if (i < n)
      stars = i + 1;
    else
      stars = 2 * n - i - 1;

    for (int j = 0; j < stars; j++)
    {
      cout << "*";
    }

    for (int j = 0; j < space; j++)
    {
      cout << " ";
    }

    for (int j = 0; j < stars; j++)
    {
      cout << "*";
    }

    cout << endl;

    if (i < n - 1)
      space -= 2;
    else
      space += 2;
  }
}

void pattern21(int n)
{
  for (int i = 0; i < n; i++)
  {
    if (i == 0 || i == n - 1)
    {
      for (int j = 0; j < n; j++)
      {
        cout << "*";
      }
      cout << endl;
    }
    else
    {
      cout << "*";
      for (int j = 0; j < n - 2; j++)
      {
        cout << " ";
      }
      cout << "*";
      cout << endl;
    }
  }
}

int main()
{
  int n;
  cout << "enter number of rows:";
  cin >> n;
  int t;
  cout << "enter number of times:";
  cin >> t;
  for (int i = 0; i < t; i++)
  {
    pattern21(n);
  }
  return 0;
}