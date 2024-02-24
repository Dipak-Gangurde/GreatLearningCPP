// Write a cpp program that calculates max number among three numbers

#include <iostream>
using namespace std;
int main(){
  int a, b, c;
  a = 2;
  b = 3; 
  c = 4;

  if(a>b){
    if(a>c)
      cout<<a<<" is the max number!\n";
  }
  else{
    if(b>c)
      cout<<b<< " is the max number!\n";
    else
      cout<<c<<" is the max number!\n";
  }

  return 0;
}