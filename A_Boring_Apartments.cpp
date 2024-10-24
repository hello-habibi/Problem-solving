#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;
    while (t--)
    {
        int n ;
        cin>>n;

        int digit= n%10;
        int ans = (digit-1) * 10 ;
        int iterator = 0;

        while (n)
        {
           n /=10;
           iterator++;
           ans+= iterator;
        }
        cout<<ans<<endl;

    }
    

    return 0;
}