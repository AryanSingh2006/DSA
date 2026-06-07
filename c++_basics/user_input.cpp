#include <iostream>

int main()
{
  std::string name;
  std::string food;
  int age;
  std::cout << "enter your name: ";
  std::getline(std::cin, name); // this is used to take input after pressed space too
  std::cout << "enter your age: ";

  std::cin >> age; // this is used normal input from the user(wont consider the input after the space)
  std::cout << "enter your fav food: ";

  std::getline(std::cin >> std::ws, food); //using the std::ws cause after taking an int we get /n and that is entered as an input in this sentence that's why we use the std::ws

  std::cout << "your name is " << name << " and your age is " << age << "and your fav food is " << food;
  return 0;
}