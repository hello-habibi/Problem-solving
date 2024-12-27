#include <bits/stdc++.h>
using namespace std;




void solve(){
    long long num ; 
    cin>>num;
    // cout<<num % 14<<endl;
    
    if ( num > 14 && num % 14 >= 1 && num % 14 <= 6){
        cout<<"YES"<<endl;

    }else{
        cout<<"NO"<<endl;
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
