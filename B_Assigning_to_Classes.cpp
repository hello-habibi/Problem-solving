#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v;
        for(int i =0; i<n*2; i++){
            int temp;
            cin>>temp;
            v.push_back(temp);
        }
        sort(v.begin(),v.end());
        cout<<abs(v[n] - v[n-1])<<endl;

    }


    return 0;
}