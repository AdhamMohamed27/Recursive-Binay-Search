#include <iostream>

int   Recursive_binarySearch(int arr[], int value, int low, int high) {
  if (high >= low) {
    int mid = low + (high - low) / 2;

    if (arr[mid] == value)
      return mid;

    if (arr[mid] > value)
      return Recursive_binarySearch(arr, value, low, mid - 1);

    return Recursive_binarySearch(arr, value, mid + 1, high);
  }

  return -1;
}

int main() {
  int array[] = {3, 4, 5, 6, 7, 8, 9};
  int value = 4;
  int high = sizeof(array) / sizeof(array[0]);
  int place = Recursive_binarySearch(array, value, 0, high - 1);
  if (place == -1)
      std::cout<<"The value you are looking for is not in the array\n";
  else
      std::cout<<"The value is located at: "<<place<<"\n";
    return 0;
}
