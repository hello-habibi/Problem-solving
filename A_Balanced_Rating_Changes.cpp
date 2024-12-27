#include <bits/stdc++.h>
using namespace std;

int main(){
    int n , temp , odd = 0 ; 
    cin>>n;
    vector <int> v;
    for(int i = 0 ; i<n ;i++){
        cin>>temp;
        v.push_back(temp);
        if(temp % 2){
            odd++;
        }
    }
    odd = odd/2;
    for(int i : v){
        if(i%2){
            if(odd>0){
                odd--;
                i++;
            }else{
                i--;
            }
        }

        cout<<i/2<<endl;
    }



    return 0  ;
}