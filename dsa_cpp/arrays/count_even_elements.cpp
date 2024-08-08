#include <iostream>
using namespace std;
int main() {
  int arr[10] = {2, 5, 4, 6, 7, 8, 11, 12, 80, 46};
  int count = 0;
  for (int i = 0; i < 10; i++) {
    if (arr[i] % 2 == 0) {
      count++;
    }
  }
  cout << "Number of even elements = " << count << endl;
  return 0;
}
