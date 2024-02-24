// Write a cpp program that shows use of pointer

#include <iostream>
using namespace std;

int main(){

  string name = "Great Learning";

  string *ptr;
  ptr = &name;

  cout<<"Value of name variable is: "<<name<<endl;
  cout<<"Address of name variable using name variable: "<<&name<<endl;
  cout<<"Address of name variable using pointer of name variable: "<<ptr<<endl;

  return 0;
}