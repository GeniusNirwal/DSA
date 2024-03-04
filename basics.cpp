#include <iostream>
using namespace std;
int main() {
  int day;
  cout <<"Enter the day number(1 to 7): ";
  cin >>day;
  //in C++, duplicates of case values are disallowed. Each case value must be distinct
  // It is possible to nest switch cases but it is generally discouraged due to over complexity
  switch(day){
    case 1:
      cout<<"Monday"<<endl;
      break;
    case 2:
      cout <<"Tuesday"<<endl;
      break;
    case 3:
      cout<<"Wednesday"<<endl;
      break;
    case 4:
      cout<<"Thurday"<<endl;
      break;
    case 5:
      cout<<"Friday"<<endl;
      break;
    case 6:
      cout<<"Saturday"<<endl;
      break;
    case 7:
      cout<<"Sunday"<<endl;
      break;
    default:
      cout<<"An error has occured"<<endl;
  }
  return 0;
}
