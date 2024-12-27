// Hello , Habibi 
#include <bits/stdc++.h>
using namespace std;




void solve(){
    long long n;
    cin>>n;
    long long count =0 ;

    while(n>0){
        n /=4;
        count++;
    }
    cout << (1LL << (count - 1)) << endl;
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
