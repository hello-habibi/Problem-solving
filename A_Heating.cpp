#include <bits/stdc++.h>
using namespace std;
/*
4
1 10000
-> 1 1 1 1 1 1 .....(100000000)
10000 1
-> 1 0 0 0 .....(1)
2 6
-> 3 3 (9+9)
4 6
-> 2 2 1 1 (10)



*/

void solve(){

    long long c , sum;
    cin>>c>>sum;

        if (c > sum)
    {
        cout<<sum<<endl;
    }
    else if (sum % c == 0)
    {
        cout<< c * (sum/c * sum /c)<<endl;
    }
    else
    {
        long long ex = sum%c;
        long long num = sum/c;
        
        long long ans = ((c-ex) * (num * num)) + (ex * ((num+1) * (num+1)));
        cout<<ans<<endl;
    }
}

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        solve();
    }
    
}
