#include<iostream>
using namespace std;

int getPivot(int arr[], int n) {
  if (n < 1) {
    // Empty array
    return -1;
  }

  int s = 0;
  int e = n - 1;

  while (s <= e) {
    int mid = s + (e - s) / 2;

    if (arr[mid] >= arr[0]) {
      s = mid + 1;
    } else {
      e = mid - 1;
    }
  }

  // The pivot is at index 's'
  return s;
}

int binarySearch(int arr[],int s, int e,int key){

  int start = s;
  int end = e;
  int mid = start + (end - start)/2;

  while(start<=end){
    if(arr[mid]==key){
      return mid;
    }

    //go to right wala part
    if(key > arr[mid]){
      start = mid + 1;
    } else {
      //key < arr[mid]
      end = mid - 1;
    }
    mid = start + (end-start)/2;
  }
  return -1;
}

int findPosition(int arr[], int n, int k)
{
  if (n < 1) {
    // Empty array
    return -1;
  }

  int pivot = getPivot(arr, n);
  if (pivot < 0 || pivot >= n) {
    // Invalid pivot index
    return -1;
  }

  if( k >= arr[pivot] && k <= arr[n-1])
  {//BS on second line
    return binarySearch(arr, pivot, n-1, k);
  } else {
    //BS on first line
    return binarySearch(arr, 0, pivot - 1, k);
  }
}

int main() {
  int arr[5] = {8, 10, 17, 1, 3};

  int position = findPosition(arr, 5, 1);
  if (position != -1) {
    cout << "The element is found at position " << position << endl;
  } else {
    cout << "The element is not found in the array" << endl;
  }

  return 0;
}
