#include <iostream>
using namespace std;
int main() {

  int arr[5] = {1, 2, 5, 9, 3};

  int sum = 0;
  for (int i = 0; i < 5; i++) {
    sum = sum + arr[i];
  }
  cout << "Sum Of all elements = " << sum << endl;
  return 0;
}
