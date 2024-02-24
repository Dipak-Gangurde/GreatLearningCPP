// Write a cpp program that shows max number among three numbers
#include <iostream>
using namespace std;
int main(){
  int a, b, c;
  cout<<"Enter three numbers: ";
  cin>>a>>b>>c;

  if((a>b) && (a>c))
    cout<<a<< " is the max number!";
  else if((b>a) && (b>c))
    cout<<b<< " is the max number!";
  else
    cout<<c<<" is the max number!";

  return 0;
}