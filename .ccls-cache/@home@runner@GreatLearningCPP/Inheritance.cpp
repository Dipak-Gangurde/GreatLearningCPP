// Write a cpp program that illustrates the concept of inheritance in object
// oriented programming

#include <iostream>
using namespace std;

class Parent {
public:
  void getdata() { cout << "I am in parent class"; }
};

class Child : public Parent {
public:
  void display() { cout << "\nI am in Child class"; }
};

int main() {

  Child aa;
  aa.getdata();
  aa.display();
}