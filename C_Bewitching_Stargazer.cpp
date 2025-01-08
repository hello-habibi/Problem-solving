// ----->>>> HELLO HABIBI <<<<-----
#include<bits/stdc++.h>
using namespace std;

long long reviv(long long n, long long k) {
    long long luckyValue = 0;
    queue<pair<long long, long long>> ranges;
    ranges.push({1, n});

    while (!ranges.empty()) {
        auto [l, r] = ranges.front();
        ranges.pop();

        long long rangeLength = r - l + 1;
        if (rangeLength < k) continue; // Skip ranges smaller than k

        long long mid = (l + r) / 2;
        if (rangeLength % 2 == 1) {
            luckyValue += mid; // Add mid to the lucky value
            if (l < mid) ranges.push({l, mid - 1}); // Add left range
            if (mid < r) ranges.push({mid + 1, r}); // Add right range
        } else {
            ranges.push({l, mid});     // Add left range
            ranges.push({mid + 1, r}); // Add right range
        }
    }

    return luckyValue;
}

void solve() {
    
    long long n , k;
    cin>>n>>k;
    cout<<reviv(n , k)<<endl;
    
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
