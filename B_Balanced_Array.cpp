#include <bits/stdc++.h>
using namespace std;

#define ll long long 


void solve(){
    ll n ;
    cin>>n;
    ll mid = n / 2;
    if(mid & 1){
        cout << "NO"<<endl;
        return;
    }
    cout<<"YES"<<endl;
    ll sum = 0 ;
    for(int i =  2 ; i<= n ; i+= 2){

            cout<<i << " " ;
            sum += i ;
    }
    for(int i = 1 ; i<n ; i+= 2){
        if(i == n-1){
        cout << sum <<" ";
        break;
        }
        cout << i <<" ";

        sum -= i ; 
        
    }
    cout<< endl;

}

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        solve();
    }
    
}
