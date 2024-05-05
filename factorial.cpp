#include<iostream>
using namespace std;

int factorial(int n) {
    //base case
    if(n==0) return 1;
    
    int fact = n * factorial(n-1);

    return fact;
    
}

int main() {
    int n;
    cout << "Enter number: ";
    cin>>n;
    int ans = factorial(n);

    cout<< "Factorial of " << n << " is " << ans;

    return 0;
}