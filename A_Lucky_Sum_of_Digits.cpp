#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    for (int four = 0; four * 4 <= n; four++) {
        if ((n - four * 4) % 7 == 0) {
            int seven = (n - four * 4) / 7;
            string number = "";
            for (int i = 0; i < four; i++) {
                number += '4';
            }
            for (int i = 0; i < seven; i++) {
                number += '7';
            }
            cout << number << endl;
            return 0;
        }
    }
    
    cout << -1 << endl;
    return 0;
}
