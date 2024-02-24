// Write a cpp program that illustrates the use of constructor in object oriented programming

#include <iostream>
using namespace std;

class Add{
  public:
    int a;
    int b;

    Add(int x, int y){
      a = x;
      b = y;
    }

    void putdata(){
      cout<<"Addition is: "<<a + b;
    }
};

int main(){
  Add aa(4, 6);
  aa.putdata();

  return 0;
}