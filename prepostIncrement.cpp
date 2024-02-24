// Write a cpp program that shows use of pre and post increment operators
#include <iostream>
using namespace std;
int main(){
  int a, b;
  cout<<"Enter first number: ";
  cin>>a;
  cout<<"Enter second number: ";
  cin>>b;

  cout<<++a<<endl;
  cout<<b++<<endl;
  cout<<b<<endl;

  return 0;
}