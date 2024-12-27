#include <bits/stdc++.h>
using namespace std;




void solve(){
    long long n ;
    cin>>n;
    vector<long long > v(n) , unique;
    set<long long> s;
    for(int i = 0 ; i<n; i++){
        cin>>v[i];
        if(!s.count(v[i])){
            unique.push_back(v[i]);
            s.insert(v[i]);
        }
        
    }
    int unique_size = unique.size();
    for(int i = 0 ; i<unique_size; i++){
        cout<<unique[i]<<" ";
    }
    for(int i = 1 ; i<=n; i++){
        if(!s.count(i)){
            cout << i << " ";
        } 

    }
    cout<<endl;


    
}

int main(){
    int t; 
    cin>>t;
    while (t--)
    {
        solve();
    }
    
}
