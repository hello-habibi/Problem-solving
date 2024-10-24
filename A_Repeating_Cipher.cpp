#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    string str ,ans;
    cin>>n>>str;
    int i = 0 , position =0;
    while(position<n){
        ans += str[position];
        i ++;
        position = position + i ; 
    }
    cout<<ans<<endl;


    return 0;
}