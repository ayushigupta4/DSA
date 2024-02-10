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
        int temp = arr[i];
        int j = i-1;
        while(j>=0) {
            if(arr[j]>temp) {
                arr[j+1] = arr[j];
                j--;
            }
            else break;
        }
        arr[j+1] = temp;
    }

    cout << "Sorted Array: ";
    printArray(arr,n);

    return 0;
}