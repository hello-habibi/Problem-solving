#include <bits/stdc++.h>
using namespace std;


#define ll long long  

void solve(){
    ll a , b  ,diff;
    cin>>a>>b;
    diff = abs(a-b);
    if(diff % 10 == 0){
        cout<<diff / 10 <<endl;
    }else{
        cout<< (diff / 10) + 1 <<endl;
    }
    
}

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        solve();
    }
    
}
