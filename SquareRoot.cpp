#include<iostream>
using namespace std;

int floorSqrt(int n)
{
    int e = n;
    int s = 0;
    long long int mid = s+(e-s)/2;
    long long int ans;

    while(s<=e) {

        long long int square = mid*mid;
        if(square==n){
            return mid;
        }
        else if(square>n) {
            e = mid - 1;
        }
        else if(square<n) {
            ans = mid;
            s = mid+1;
        }

        mid = s+(e-s)/2;
    }
    return ans;
}

double morePrecision(int n, int p, int floorValue) {
    double factor = 1;
    double ans = floorValue;
    for(int i=0; i<p; i++) {
        factor = factor/10;
        for(double j=ans; j*j<n; j=j+factor)
            ans = j;
    }

    return ans;
}

int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;

    int floorValue = floorSqrt(n);
    
    cout << "Square root: " << morePrecision(n,3,floorValue) << endl;
}