#include <bits/stdc++.h>
using namespace std;

long long binary_Exponential(long long a , int b){
    long long ans = 1; 

    while (b)
    {
        if(b&1){
            ans *=a;
        }
        b>>= 1;
        a *= a;
    }
    return ans;
    
}

int main(){
    cout<<binary_Exponential(2 , 5)<<endl;



    return 0;
}