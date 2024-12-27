#include <bits/stdc++.h>
using namespace std;

#define ll long long 


void solve(){
    ll a , b , mid;
    cin>>a>>b;
    if(a%b == 0 ){
        cout<<0<<endl;
    }else{
        cout<< b - (a%b)<<endl;
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
