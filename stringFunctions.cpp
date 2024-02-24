// Write a cpp program that shows use of string functions

#include<cstring>
#include <iostream>
using namespace std;

int main(){
  char a[] = "Great";
  char b[] = "Learning";

  cout<<"Concatenation function: "<<strcat(a, b);
  cout<<"\nCopy function: "<<strcpy(a, b);
  cout<<"\nLength function: "<<strlen(a);

  return 0;
}