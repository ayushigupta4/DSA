#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> &arr, int e, int s, int k) {
    int mid = s + (e - s) / 2;

    while (s <= e) {
        if (arr[mid] == k) {
            return mid;
        } else if (arr[mid] < k) {
            s = mid + 1;
        } else {
            e = mid - 1;
        }

        mid = s + (e - s) / 2;
    }

    return -1;
}

int getPivot(vector<int> &arr, int n) {
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;

    while (s < e) {
        if (arr[mid] >= arr[0]) {
            s = mid + 1;
        } else {
            e = mid;
        }

        mid = s + (e - s) / 2;
    }
    return s;
}

int search(vector<int> &arr, int n, int k) {
    int pivot = getPivot(arr, n);

    if (arr[pivot] <= k && arr[n - 1] >= k) {
        return binarySearch(arr, n - 1, pivot, k);
    } else {
        return binarySearch(arr, pivot - 1, 0, k);
    }
}

int main() {
    vector<int> arr = {2,3,5,8};
    int n = arr.size();
    int k = 3;

    int result = search(arr, n, k);

    if (result != -1) {
        cout << "Element found at index: " << result << endl;
    } else {
        cout << "Element not found." << endl;
    }

    return 0;
}
