// Reverse an array of N integer. Extra space can be used

#include <iostream>
using namespace std;

int main() {

  int arr1[5] = {1, 2, 3, 4, 5};
  int arr2[5];
  int j = 0, i;
  for (i = 4; i >= 0; i--) {
    if (j < 5) {
      arr2[j] = arr1[i];
      j++;
    }
  }
  cout << "    Main array:: ";
  for (i = 0; i < 5; i++) {
    cout << arr1[i] << " | ";
  }
  cout << "\nReversed array:: ";
  for (i = 0; i < 5; i++) {
    cout << arr2[i] << " | ";
  }
  return 0;
}
