#include <bits/stdc++.h>
using namespace std;




void solve(){
    long long n , m , k , maxi = -1 , maxi2 = -1;
    cin>>n>>m>>k;
    vector<long long> v(n);
    for(int i = 0 ; i<n ; i++){
        cin>>v[i];
        if(v[i] == maxi){
            maxi2 = maxi;
        }
        else if(v[i] > maxi){
            maxi2 = maxi;
            maxi = v[i];
        }else{
            maxi2 = max(maxi2 , v[i]);
        }
    }
    if(maxi == maxi2){
        cout<< maxi*m<<endl ;
    }
    else if(m<=k){
        cout<< m*maxi <<endl;
    }else{
        long long mod = m % (k+1);
        long long repeat = m / (k+1);
        cout<<(repeat * k * maxi) + (repeat * maxi2)+(mod * maxi)<<endl;
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
