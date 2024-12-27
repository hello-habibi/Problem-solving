#include <bits/stdc++.h>
using namespace std;

#define ll long long 


void solve(){
    ll x , y , z , maxi , mini , count = 0 , sum ;
    cin>>x>>y>>z;


    maxi = max(x%z,y%z);
    mini = min(x%z,y%z);
    count += x/z;
    count+= y/z;
    sum = maxi + mini;
    if(sum == z){
        cout<<count +1<< " " << mini<<endl;
    }else if(sum>z){
        cout<<count+1<< " "<<z - maxi <<endl;
    }else{
        cout<<count << " "<< 0 <<endl;
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
