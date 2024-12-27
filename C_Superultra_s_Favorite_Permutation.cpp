#include <bits/stdc++.h>
using namespace std;



void solution (){
    int n ; 
    cin>>n;
    if(n <5){
        cout<<-1<<endl;
        return;
    }else{
        for(int i = 1 ; i<=n; i+=2 ){
            if( i!=5){
                cout<<i<<" ";
            }
        }
        cout<<5<<" "<<4<<" "<<2<<" ";
        for(int i = 6;  i<= n; i+=2){
            cout<<i<<" ";
        }
    }


}


int main(){
    int t;
    cin>>t;
    while (t--)
    {
        solution();
    }
    


    return 0;
}