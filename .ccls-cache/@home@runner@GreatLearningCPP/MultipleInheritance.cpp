// Write a cpp program that illustrates the use of multiple inheritance in object oriented programming

#include <iostream>
using namespace std;

class parent1{
public:
  void getdata(){
    cout<<"Hello from parent1";
  }
};

class parent2{
public:
  void print(){
    cout<<"\nHello from parent2";
  }
};

class Child: public parent1, public parent2{
public:
  void display(){
    cout<<"\nHi from Child";
  }
};

int main(){
  Child aa;
  aa.getdata();
  aa.print();
  aa.display();

  return 0;
}