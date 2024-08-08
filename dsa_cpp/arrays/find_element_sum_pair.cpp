#include <iostream>
using namespace std;
int main() {
  int arr[12] = {1, 4, 6, 8, 10, 16, 24, 14, 11, 13, 18, 20};
  int count = 0;
  int val = 24;
  for (int i = 0; i < 12; i++) {
    for (int j = i + 1; j < 12; j++) {
      if (arr[i] + arr[j] == val) {
        count++;
      }
    }
  }
  cout << "No. of pairs for target value 24 is => " << count << endl;
  return 0;
}
