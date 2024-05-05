#include<iostream>
using namespace std;

void sayDigits(int n, string arr[]) {

    if(n==0) return;

    int digit = n%10;
    n = n/10;
    sayDigits(n,arr);

    cout<< arr[digit] << " ";
}

int main() {
    string arr[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    int n;
    cout<< "Enter number: ";
    cin >> n;

    sayDigits(n, arr);

    cout << endl;
}