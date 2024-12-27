#include <bits/stdc++.h>
using namespace std;

int main(){
    int  n; 
    cin>>n; 
    if(n == 1){
        cout<<"Ehab"<<endl;
    }else if(n == 2){
        cout<<"Mahmoud"<<endl;
    }else{
        if(n%2 == 1){
            cout<<"Ehab"<<endl;
        }else{
            cout<<"Mahmoud"<<endl;
        }
    }


    return 0;
}