#include <bits/stdc++.h>
using namespace std;


const int LIMIT = 90000001;  
bool prims[LIMIT] = {};  
void calculatePrimes(vector<int> &primes) {
    prims[0] = prims[1] = true;  

    for (int i = 2; i * (long long)i < LIMIT; i++) {  
        if (!prims[i]) {  
            for (int j = i * i; j < LIMIT; j += i) {
                prims[j] = true;  
            }
        }
    }

    for (int i = 2; i < LIMIT; i++) {
        if (!prims[i]) {
            primes.push_back(i);
        }
    }
}

int main() {
    vector<int> primes;
    calculatePrimes(primes);  

    int t; 
    cin >> t; 
    
    while (t--) {
        int k;
        cin >> k;  
        
        if (k <= primes.size()) {
            cout << primes[k - 1] << endl;  
        } else {
            cout << "Requested prime exceeds limit" << endl;
        }
    }

    return 0;
}
