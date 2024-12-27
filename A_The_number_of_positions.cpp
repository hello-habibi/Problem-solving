#include <bits/stdc++.h>
using namespace std;
int main(){
    int n , a, b;
    cin>>n>>a>>b;
     for(int i=0; i<=100; i++){
        if(i>a && (n-i) <=b){
            cout<<i<<endl;
            break;
        }
     }


    return 0;
}