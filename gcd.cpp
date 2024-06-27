#include<iostream>
using namespace std;

int gcd(int a, int b) {
    if(a==0) {
        return b;
    }

    if(b==0) {
        return a;
    }

    while(a!=b) {
        if(a>b) {
            a = a-b;
        }
        else {
            b = b-a;
        }
    }

    return a;
}

int main() {
    int a,b;
    cout << "Enter 2 values: ";
    cin >> a;
    cin >> b;
    int ans = gcd(a,b);
    cout << "GCD: " << ans;
    return 0;
}