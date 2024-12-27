#include <bits/stdc++.h>
using namespace std;

int main(){
    int n , d , temp;
    cin>>n>>d;
    vector<pair<int,int>> days , ans;
    for(int i = 0 ; i<n; i++){
        cin>>temp;
    days.push_back({temp , i+1});
    }
    sort(days.begin() , days.end());
    for(auto p : days){
        if(p.first<=d){
            ans.push_back({p.first , p.second});
            d-= p.first;
        }
    }
    cout<<ans.size()<<endl;
    for(auto p: ans){
        cout<<p.second<<" ";
    }



    return 0 ; 
}