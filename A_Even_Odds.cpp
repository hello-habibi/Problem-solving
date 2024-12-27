#include <bits/stdc++.h>

using namespace std;

int main(){

     int n , k;
     cin >> n >> k;
     int p;

     if( n % 2 == 0 ){
        p = n/2;
     }else{
        p = n/2 + 1;
     }
     if(p>=k){

        cout<< (2*k) -1 << endl;

     }else{
         p = k - p;
        cout<< p*2 << endl;
     }


    return 0;
}