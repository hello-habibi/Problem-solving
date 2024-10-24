#include <bits/stdc++.h>
using namespace std;

int main(){
    int n , a , b , maxSize,present;

    cin >>n>>a>>b;
    maxSize = b;
    present = b;

    for(int i = 1; i<n ;i++){
        cin>>a>>b;
        present = present - a + b;
        maxSize = max(present , maxSize);
    }
    cout<<maxSize<<endl;



    return 0;
}