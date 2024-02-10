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

    for(int i=0; i<n-1; i++) {
        int minIndex = i;

        for(int j=i+1; j<n; j++)
            if(arr[j] < arr[minIndex])
                minIndex = j;

        swap(arr[minIndex],arr[i]);
    }

    cout << "Sorted Array: ";
    printArray(arr,n);

    return 0;
}