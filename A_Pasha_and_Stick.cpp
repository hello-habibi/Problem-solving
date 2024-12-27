#include <bits/stdc++.h>
using namespace std;




void solve(){
    long long n;
    cin>>n;
    if(n&1){
        cout<<0<<endl;
        return; 
    }

    if(n%4 == 0){
        cout<<(n/4)-1<<endl;
    }else{
        cout<<n/4<<endl;
    }
    
}

int main(){
    // int t;
    // cin>>t;
    // while (t--)
    // {
        solve();
    // }
    
}
