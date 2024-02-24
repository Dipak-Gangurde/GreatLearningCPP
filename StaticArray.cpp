// Write a cpp program that shows use of static array

#include <iostream>
using namespace std;
int main() {

  int arr[5] = {1, 2, 3, 4, 5};
  char arr2[10] = {'H', 'e', 'l', 'l', 'o'};

  for (int i = 0; i < 5; i++)
    cout << arr[i] << " ";
  cout << endl;
  for (int j = 0; j < 5; j++)
    cout << arr2[j] << " ";

  return 0;
}