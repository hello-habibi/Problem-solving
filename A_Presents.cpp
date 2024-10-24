#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int nums[n] , result [n];
    for(int i=0 ; i<n; i++){
        cin>>nums[i];
        result[nums[i]-1] = i+1;
    }
    for(int k:result){
        cout<<k<<" ";
    }


    return 0;
}