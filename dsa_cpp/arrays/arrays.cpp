#include <iostream>

void testArrays() {
  int arr[] = {1, 2, 3, 4, 5};
  int length = sizeof(arr) / sizeof(arr[0]);

  std::cout << "Array elements: ";
  for (int i = 0; i < length; i++) {
    std::cout << arr[i] << " ";
  }
  std::cout << std::endl;
}

int main() {
  testArrays();
  return 0;
}
