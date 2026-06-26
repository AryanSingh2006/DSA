#include <bits/stdc++.h>

int main()
{
  int age;
  std::cout << "enter your age: ";
  std::cin >> age;
  if (age >= 18)
  {
    std::cout<<"you are eligible to vote";
  }else
  {
    std::cout<<"not eligible to vote";
  }
  return 0;
}