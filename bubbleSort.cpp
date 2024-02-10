#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

void inputArray(vector<int> &arr, int n) {
    cout << "Enter elements: ";
    //arr.resize(n);
    for(int i=0; i<n; i++)
        cin>> arr[i];
}

void printArray(vector<int> &arr, int n) {
    for(int i=0; i<n; i++)
        cout << arr[i] << " ";

    cout << endl;
}

int main() {
    
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    vector<int> arr(n);
    inputArray(arr,n);

    for(int i=1; i<n; i++) {
        bool swapped = false;

        for(int j=0; j<n-i; j++) {
            if(arr[j]>arr[j+1]) {
                swap(arr[j],arr[j+1]);
                swapped = true;
            }
                
        }

        if(!swapped) break;
    }

    cout << "Sorted Array: ";
    printArray(arr,n);

    return 0;
}