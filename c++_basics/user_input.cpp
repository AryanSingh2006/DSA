#include <iostream>

int main()
{
  std::string name;
  int age;
  std::cout << "enter your name: ";
  std::getline(std::cin, name); // this is used to take input after pressed space too
  std::cout << "enter your age: ";
  std::cin >> age; // this is used normal input from the user(wont consider the input after the space)
  std::cout << "your name is " << name << " and your age is " << age;
  return 0;
}