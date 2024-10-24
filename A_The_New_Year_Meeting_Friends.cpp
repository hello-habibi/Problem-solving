#include <bits/stdc++.h>
using namespace std;

int main(){
    int m , n , k;
    cin>>m>>n>>k;
    int maximum = max(max(m,n) , max(n,k));
    int minimum = min(min(m,n) , min(n,k));
  

    int ans = maximum-minimum;
    cout<<ans;
}