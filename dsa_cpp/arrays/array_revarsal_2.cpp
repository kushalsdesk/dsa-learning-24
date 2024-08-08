// Reverse an array. Without using extra Space!

#include <iostream>
using namespace std;
int arr[5] = {1, 2, 3, 4, 5};
void swap(int a, int b) {
  int temp;
  temp = arr[a];
  arr[a] = arr[b];
  arr[b] = temp;
}
void print_arr() {
  for (int i = 0; i < 5; i++) {
    cout << arr[i] << " ";
  }
  cout << "\n";
}

int main() {
  int front, back = 4, step_no = 1;
  cout << "Input: ";
  print_arr();
  cout << "\n_______Steps_______ \n";

  for (front = 0; front < back; front++) {
    swap(front, back);
    cout << "Step " << step_no << ": ";
    print_arr();
    step_no++;
    back--;
  }
  cout << "___________________ \n";
  cout << "Final : ";
  print_arr();
  return 0;
}
