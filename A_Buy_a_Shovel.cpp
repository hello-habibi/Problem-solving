#include <bits/stdc++.h>
using namespace std;




void solve(){
    long long m , n , k;
    cin>>m>>k;
    n =  m;



    for(int i = 1; i<=10 ; i++){
        n = (i *m);
        if (n % 10 == 0 or n % 10 == k)
        {
            cout << i << endl;
            return ; 
        }
    }
    
}

int main(){
solve();
    
}
