#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int m , n ;
        cin>>m>>n;
        string s[m];
    for (int i = 0; i < m; i++) 
    {
        cin>>s[i];
    }
    
        int ans=0;
        for(int i = 0; i<m ;i++){
            if(s[i][n-1] == 'R'){
                ans++;
            }
        }
        for(int i = 0 ; i<n; i++){
            if(s[m-1][i] == 'D'){
                ans++;
            }
        }
        cout<<ans<<endl;
    }


    return 0;
}