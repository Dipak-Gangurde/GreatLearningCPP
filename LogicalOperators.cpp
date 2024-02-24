// Write a cpp program that shows use of logical operators
#include <iostream>
using namespace std;
int main(){
  bool a = true;
  bool b = false;

  cout<<(a&&b)<<endl;
  //false
  cout<<(a||b)<<endl;
  //true
  cout<<(a&&a)<<endl;
  // true
  cout<<(a||a)<<endl;
  // true

  return 0;
}