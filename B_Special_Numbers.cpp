#include <bits/stdc++.h>
using namespace std;

// long long result(long long n, long long k) {
//     if (k == 0)
//         return 1; // Base case: n^0 = 1
//     if (k == 1)
//         return n; // Base case: n^1 = n

//     long long half = result(n, k / 2); // Compute n^(k/2) once

//     if (k % 2 == 0)
//         return half * half; // Even power: (n^(k/2))^2
//     else
//         return half * half * n; // Odd power: (n^(k/2))^2 * n
// }
const long long MOD = 1e9 + 7;
long long binryExponetiation(long long base, long long expo)
{
    long long result = 1;
    base %= MOD;
    while (expo > 0)
    {
        if (expo & 1)
        {
            result = (result * base) % MOD;
        }
        base = (base * base) % MOD;
        expo >>= 1;
    }
    return result;
}

void solve()
{
    long long n, k;
    cin >> n >> k;
    

    // cout<<binryExponetiation(n , k-1)<<endl
    string v;
    while (k)
    {
        if(k%2 == 0){
            v+= '0';
        }else{
            v+='1';
        }
        k/=2;

    }
    long long ans = 0;
    for(int i = 0 ; i<v.size() ; i++){
        if(v[i] == '1'){
            ans+= binryExponetiation(n,i);
            ans %= MOD;
        }
    }
    cout<<ans<<endl;
    
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
