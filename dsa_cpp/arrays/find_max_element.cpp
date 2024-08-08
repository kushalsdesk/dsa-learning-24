#include <iostream>
using namespace std;
int main() {
  int arr[6] = {34, 67, 1, -1, 69, 99}; // MAX 99
  int max = arr[0];
  for (int i = 0; i < 6; i++) {
    if (arr[i] >= max) {
      max = arr[i];
    }
  }
  cout << "Max element is : " << max << endl;
  return 0;
}
