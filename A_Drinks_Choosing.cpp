#include <bits/stdc++.h>
using namespace std;




void solve(){
        int n , k ;
        cin>>n>>k;
        vector<int> v(k+1 , 0);
        int oddCount = 0, evenCount = 0, capacity;
        capacity = (n+1) / 2;

        for(int i = 0 ; i<n ; i++){
            int temp ;
            cin>>temp ; 
            v[temp]++;

        }
        for(int i = 1; i<= k ; i++){
            if (v[i] & 1)
            {
                oddCount++;
                evenCount += v[i] / 2;
            }
            else
            {
                evenCount += v[i] / 2;
            }
        }

        if(evenCount >= capacity){
            cout<<capacity*2<<endl;

        }else{
            int sum = evenCount * 2 ;
            capacity -= evenCount;
             if(capacity > oddCount){
                sum+= oddCount;
             }else{
                sum+= capacity;
             }
             cout<<sum<<endl;
        }
}

int main(){
    // int t;
    // cin>>t;
    // while (t--)
    // {
        solve();
    // }
    
}
