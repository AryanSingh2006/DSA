#include <iostream>

int main()
{
  int a = 10;
  int b = 20;
  double c = 7.5;
  std::cout << a << std::endl;
  std::cout << b << std::endl;
  std::cout << c << std::endl;
  std::cout << a + b << std::endl;

  char grade = 'A';
  std::string name = "Aryan";
  bool isStudent = true;
  std::cout << name << " got " << grade << " in exams" << std::endl;
  std::cout << "is Aryan a student " << isStudent << std::endl; // isStudent will give us the value 1 that is reprsenting true and for false it will be 0
  return 0;
}