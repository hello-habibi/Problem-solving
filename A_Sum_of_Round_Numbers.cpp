#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    int num , ans;
    
    while(t--){
        ans=0;
        int digits[] = {0,0,0,0,0};
        int iterator =0;
        cin>>num ;
        int dump = num;
        while(dump){
            digits[iterator++] = dump%10;
            dump/=10;
        }
        for(int i=0; i<5; i++){
            if(digits[i]>0){
                ans++;
            }
        }
        cout<<ans<<endl;
        for(int i=0;i<5; i++){
            if(digits[i]>0){
                cout<<digits[i] * pow(10,i)<<" ";
            }
        }
        cout<<endl;

        
    }
}