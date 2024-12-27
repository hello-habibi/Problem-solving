#include <bits/stdc++.h>
using namespace std;




void solve(){
    int n ; 
    cin >> n ;

    vector<int> v(n);
    for(int i = 0 ;i<n; i++) cin>>v[i];

    int m = 1<< n;
    bool flag = false;
    for(int i = 0 ; i<m; i++){
        int sum = 0 ;
        for(int j = 0 ; j<n; j++){
            if(i & (1<<j) ) {
                sum+= v[j];
            }else{
                sum-= v[j];
            }
        }
        if(sum % 360 == 0){
            flag = true;
            break;
        }
    }
    if(flag){
        cout<<"YES"<<endl;

    }else{
        cout<<"NO"<<endl;
    }

    
}

int main(){
solve();
    
}
