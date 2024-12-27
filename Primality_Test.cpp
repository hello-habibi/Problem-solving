#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        
        if (n <= 1) {
            cout << "no" << endl;
            continue;
        }
        if (n == 2 || n == 3) {
            cout << "yes" << endl;
            continue;
        }
        if (n % 2 == 0) {
            cout << "no" << endl;
            continue;
        }

        bool flag = true;
        for (int i = 3; i <= sqrt(n); i += 2) {
            if (n % i == 0) {
                flag = false;
                break;
            }
        }

        if (flag) {
            cout << "yes" << endl;
        } else {
            cout << "no" << endl;
        }
    }
    return 0;
}
