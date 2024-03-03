#include <iostream>
//  #include<bits/stdc++.h>
// to include all the libaries
using namespace std;

int main() {
  // only the characters within 2 spaces are considered as 1 string
  // so to get a string with spaces we use getline
  // char datatype works jut like in C
  string str;
  getline(cin, str);
  cout << str;

  return 0;
  
}