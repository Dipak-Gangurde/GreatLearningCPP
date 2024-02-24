// Write a cpp program that illustrates concept of Function Overloading

#include <iostream>
using namespace std;

int add(int a, int b){
  return a+b;
}

double add(double a, double b){
  return a+b;
}

int main(){

  cout<<"Addition is: "<<add(4, 8);
  cout<<"\nAddition is: "<<add(4.5, 8.5);

  return 0;
}