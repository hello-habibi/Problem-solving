#include <bits/stdc++.h>
using namespace std;




void solve(){
    long long n;
    cin>>n;
    if(n<=2){
        cout<<0<<endl;
    }else{
        if(n & 1){
            cout << n / 2 << endl;
        }else{
            cout <<(n/2) -1<<endl;
        }
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
