// Write a cpp program that illustrates the use of ifstream in file handling

#include <iostream>
#include <fstream>
using namespace std;

int main(){

  string mytext;

  ifstream input("file1.txt");

  while(getline(input, mytext))
    cout<<mytext;

  return 0;
}

