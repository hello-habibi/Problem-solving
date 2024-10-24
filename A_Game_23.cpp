#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n , k;
    cin>>k>>n;
    if(n==k){
        cout<<0<<endl;
        return 0;
    }
    if(n % k !=0 ){
        cout<<-1<<endl;
        return 0;
    }
    int mid_step = (n / k);
    int step = 0;
    while(mid_step > 1){
        if(mid_step % 2 == 0){
            mid_step /=2;
            step++;
        }else if(mid_step % 3 == 0){
            mid_step /=3;
            step ++;
        }else{
            cout<<-1<<endl;
            return 0;
        }
    }
    cout<<step<<endl;




    return 0;
}