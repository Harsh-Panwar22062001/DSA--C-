#include<iostream>
using namespace std;

// to print the elements in the array
void traverse(int arr[], int n) {
    
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  
}

// to perform bubble sort
void bubbleSort(int arr[], int n) {

  for (int i = 0; i < n - 1; i++) {
    for (int j = i + 1; j < n - i - 1; j++) {
        
      if (arr[j] > arr[j + 1]) {
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
      
    }
  }
  
}

int main() {
 
  // initializing an array to sort
  int arr[5] = {36, 2, 45, 25, 18}; 

  // length of the array
  int n = sizeof(arr) / sizeof(arr[0]);

  // printing the unsorted array
  cout << "Unsorted Array - \n";
  traverse(arr, n);

  // calling the sorting function
  bubbleSort(arr, n);

  // printing array after sorting
  cout << "\nSorted Array - \n";
  traverse(arr, n);

  return 0;
}
