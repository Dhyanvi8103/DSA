#include <iostream>
#include <vector>
using namespace std;

// First occurrence
int firstOcc(vector<int>& arr, int n, int key) {
    int start = 0, end = n - 1;
    int ans = -1;

    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (arr[mid] == key) {
            ans = mid;
            end = mid - 1;
        } else if (key > arr[mid]) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }

    return ans;
}

// Last occurrence
int lastOcc(vector<int>& arr, int n, int key) {
    int start = 0, end = n - 1;
    int ans = -1;

    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (arr[mid] == key) {
            ans = mid;
            start = mid + 1;
        } else if (key < arr[mid]) {
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }

    return ans;
}

// Main function to test
int main() {
    vector<int> arr = {1, 2, 3, 3, 3, 4, 5};
    int key = 3;
    int n = arr.size();

    int first = firstOcc(arr, n, key);  
    int last = lastOcc(arr, n, key);

    cout << "First Occurrence of " << key << " is at index: " << first << endl;
    cout << "Last Occurrence of " << key << " is at index: " << last << endl;

    return 0;
}
  









 