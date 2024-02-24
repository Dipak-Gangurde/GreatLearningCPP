// Write a cpp program that illustrates the use of file handling 

#include <iostream>
#include <fstream>
using namespace std;

int main(){

  ofstream myFile("file1.txt");

  myFile << "This is file1 ";

  myFile.close();

  return 0;
}