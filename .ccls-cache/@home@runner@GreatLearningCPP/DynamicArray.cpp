// Write a cpp program that illustrates the use of dynamic array

#include <iostream>
using namespace std;

int main(){

  int arr[5];
  cout<<"Enter values in the array: ";
  for(int i=0; i<5; i++)
    cin>>arr[i];

  cout<<"Values in the array are: "<<endl;
  for(int i=0; i<5; i++)
    cout<<arr[i]<<" ";

  return 0;
}