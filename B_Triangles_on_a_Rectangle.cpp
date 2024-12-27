#include <bits/stdc++.h>
using namespace std;




void solve(){
    long long w , h ,l,r,u,d;
    long long  horizontal , vertical ;
    cin>>w>>h;
    cin>>d;
    vector<long long> down_side(d);
    for(int i = 0 ; i<d ; i++){
        cin>>down_side[i];
    }
    cin>>u; 
    vector<long long > up_side(u);
    for(int i = 0 ; i<u; i++){
        cin>>up_side[i];
    }

    horizontal = max(h * (down_side[d - 1] - down_side[0]),
                     h * (up_side[u - 1] - up_side[0]));

    cin>>l;
    vector<long long > left_side(l);
    for(int i = 0 ; i< l ; i++){
        cin>>left_side[i];
    }
    cin>>r;
    vector<long long > right_side(r);
    for(int i = 0 ; i<r; i++){
        cin>>right_side[i];
    }

    vertical = max(w * (left_side[l - 1] - left_side[0]),
                   w * (right_side[r - 1] - right_side[0]));
    cout<<max(horizontal , vertical)<<endl;


    
}

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        solve();
    }
    
}
