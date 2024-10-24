#include <bits/stdc++.h>
using namespace std;

int main(){

int t;
cin>>t;
string test ;
int tet = 0;
int cub = 0;
int oct = 0;
int dod = 0;
int ico = 0;

while(t--){
    cin>>test;
    if(test[0] =='T') tet++;
    else if(test[0] =='C') cub++;
    else if(test[0] =='O') oct++;
    else if(test[0] == 'I') ico++;
    else dod++;

}
int ans = (tet *4)+(cub*6)+(oct*8)+(dod*12)+(ico*20);
cout<<ans<<endl;

    return 0;
}