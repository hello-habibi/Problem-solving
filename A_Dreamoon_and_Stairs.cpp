#include <bits/stdc++.h>
using namespace std;

int main(){
    int n , m;
    cin>>n>>m;
    if(m>n){
        cout<<-1<<endl;
        return 0;
    }
    if(m == n){
        cout<<m<<endl;
        return 0;
    }
    int ans = (n+1)/2;
    while (ans<n)
    {
        if(ans%m ==0){
            cout<<ans<<endl;
            return 0;
        }
        ans++;
    }
    


    return 0;
}