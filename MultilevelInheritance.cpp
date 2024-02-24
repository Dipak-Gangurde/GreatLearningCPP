// Write a cpp program that demonstrates use of multilevel inheritance

#include <iostream>
using namespace std;

class Grandparent{
public: 
  void getdata(){
    cout<<"Hello from Grand Parent!";
  }
};

class Parent: public Grandparent{
public: 
  void print(){
    cout<<"\nHello from Parent!";
  }
};

class Child: public Parent{
public:
  void display(){
    cout<<"\nHi from Child!!";
  }
};

int main(){
  Child aa;
  aa.getdata();
  aa.print();
  aa.display();

  return 0;
}