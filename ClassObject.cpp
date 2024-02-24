// Write a cpp program that illustrates concept of class and object

#include <iostream>
using namespace std;

class Student{
  public:
    int id;
    string name;

  void getdata(){
    cout<<"ID: "<<id;
    cout<<"\nName: "<<name;
  }
};

int main(){
  Student aa;
  aa.id = 1;
  aa.name = "Ram";
  aa.getdata();

  return 0;
}