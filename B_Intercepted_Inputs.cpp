#include <bits/stdc++.h>
using namespace std;



void solution (){
int n ;
cin>>n;
vector<bool> v(n + 1 , false);
for(int i =0; i<n; i++){
    int temp;
    cin>>temp;
    v[temp] = true;
}

n-= 2; 
for(int i = 1 ; i <= sqrt(n) ; i++){
    if(n % i == 0 ){
        int temp = n/i;
        if(v[i] == true and v[temp] == true){
        cout<<i <<" "<<n/i<<endl;
        return;
        }

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