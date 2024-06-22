#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

void sieve(vector<long long> &prime, int n) {
    vector<bool> isPrime(n+1, true);
    for(long long i=2; i<=n; i++) {
        if(isPrime[i]) {
            prime.push_back(i);
            for(long long j = i*i; j<=n; j=j+i) {
                isPrime[j] = false;
            }
        }
    }

}

void segSieve(vector<long long> &prime, int l, int h) {
    long sq = sqrt(h);
    sieve(prime, sq);

    vector<bool> isPrime(h-l+1,true);
    for(long long p: prime) {
        long long sm = (l/p)*p;
        if(sm<l) 
            sm += p;

        for(long long m =sm; m<=h; m=m+p) {
            isPrime[m-l] = false;
        }
    }

    for(long long i =l; i<=h; i++) {
        if(isPrime[i-l]) 
            cout << i << " ";
    }

    cout<< endl;
}

int main() {
    int l,h;
    cout << "Enter lower and higher range: "<< endl;
    cout << "Lower: ";
    cin >> l;
    cout << "Higher: ";
    cin >> h;
    long sq = sqrt(h);
    vector<long long> prime;
    segSieve(prime, l , h);


    return 0;
}