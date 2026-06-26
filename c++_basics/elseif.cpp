#include <bits/stdc++.h>
using namespace std;

int main()
{
  int grade;
  cout << "ener your grade: ";
  cin >> grade;
  if (grade < 25)
  {
    cout << "F";
  }
  //aleady checked that the grade is larger than the 25 so we dont need to check that again
  else if (grade <= 44){
    cout<<"E";
  }
  //same here we again dont need to check if the grade is greater that 44, the previous conditons already checked that
  else if(grade<=49){
    cout<<"D";
  }
  else if(grade<=59){
    cout<<"C";
  }
  else if(grade<=79){
    cout<<"B";
  }
  else if(grade<=100){
    cout<<"A";
  }
  else{
    cout<<"invalid grade";
  }
    return 0;
}