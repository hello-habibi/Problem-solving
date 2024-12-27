#include <bits/stdc++.h>
using namespace std;




void solve(){
    long long n , k ;
    cin >> n >> k ;
    if(k == 1 ){
        cout<< n << endl;
        return ; 
    }
    int count  = 0 ;
    while (n>1)
    {
        n>>=1;
        count++;
    }
    cout<< ( 1LL << count+1) - 1<<endl;
    
    
}

int main(){

    
        solve();
    
    
}
