#include<iostream>
using namespace std;

int getPivot(int arr[], int n) {
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

int main() {
    int arr[5] = {8, 10, 17, 1, 3};

    cout << "The pivot is at index " << getPivot(arr, 5) << endl;

    return 0;
}
