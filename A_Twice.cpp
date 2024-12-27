#include <bits/stdc++.h>
using namespace std;


void solution (){
    int n ; 
    cin>>n;
    vector<int> v(n+1);
    for(int i = 0 ; i<n; i++){
        int temp;
        cin>>temp;
        v[temp]++;
    }
    int anss = 0 ;
    for(int num: v){
        if(num>1){
            anss+= num / 2;
        }
    }
    cout<<anss<<endl;


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