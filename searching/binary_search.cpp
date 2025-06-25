#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int key) {
    int start = 0, end = n - 1;
    while (start <= end) {
        int mid = (start + end) / 2;
        if (arr[mid] == key)
            return mid;
        else if (arr[mid] < key)
            start = mid + 1;
        else
            end = mid - 1;
    }
    return -1;
}

int main() {
    int arr[] = {1, 3, 5, 7, 9, 11};
    int key = 7;
    int index = binarySearch(arr, 6, key);
    if (index != -1)
        cout << "Found at index " << index;
    else
        cout << "Not found";
    return 0;
}
