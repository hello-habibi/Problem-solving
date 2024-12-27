// Hello , Habibi 
#include <bits/stdc++.h>
using namespace std;

void subsetSum(int n, const vector<int>& v, int sum, int target, bool& found) {
    if (n == 0 || found) {
        if (sum == target) {
            found = true;
        }
        return;
    }
    subsetSum(n - 1, v, sum, target, found);
    subsetSum(n - 1, v, sum + v[n - 1], target, found);
}


void solve(){

    int n;
    cin>>n;

    vector<long long > v(n), sum(n, 0);
    set<long long> s;
    for(int i = 0  ; i< n ; i++){
        for(int j = i ; j< n ; j++){
            long long sum = sum[j]-sum[i];
        }
    }
    
}

int main(){
        ios::sync_with_stdio(false);
        cin.tie(0) ; 
    int t;
    cin>>t;
    while (t--)
    {
        solve();
    }
    
}
