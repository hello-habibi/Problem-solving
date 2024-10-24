#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int ans =INT32_MAX;
    int drink= k*l;
    int slice = c*d;
    ans = min((drink/nl),slice);
    ans = min((p/np) , ans);
    ans = ans/n;
    cout<<ans<<endl;

    return 0;
 
}