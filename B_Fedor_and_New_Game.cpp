#include <bits/stdc++.h>
using namespace std;




void solution (){
    int k , m , n  , fedor , test;
    int count = 0 ;
     cin>>n>>m>>k;
     vector<int> v(m);
     for(int i =0  ; i<m  ; i++){
        cin>>v[i];
     }
     cin>>fedor;
    //  fedor = __builtin_popcount(fedor);
     for(int num : v){
        test = num ^ fedor;
        test = __builtin_popcount(test);

        if(test <= k){
            count++;
        }
     }
     cout<<count<<endl;



}


int main(){

        solution();
    


    return 0;
}