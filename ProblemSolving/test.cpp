#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    long long t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(k);
        for (int i = 0; i < k; i++) {
            cin >> a[i];
        }

        sort(a.begin(), a.end());
        int t = 0, s = 0;
        s = n - a[k - 1];
        for (int i = 0; i < k - 1; i++) {
            if (a[i] >= 2) {
                t += a[i] - 1;
            }
        }
        cout << s + t << '\n';
    }

    return 0;
}
