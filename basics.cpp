#include <iostream>
using namespace std;
int main() {
  int age;
  cout << "Enter your age: ";
  cin >> age;
  if(age<18){
    cout << "Not eligible for the job\n";
  }
  else if(age <=54){
    cout<< "Eligible for job\n";
  }
  else if(age<=57){
    cout<<"Eligible for job, but retirement soon\n";
  }
  else if(age>57){
    cout << "Retirement time\n";
  }
  return 0;
}
