#include <bits/stdc++.h>
using namespace std;


void solution (){
    int n ;
     cin>>n;
     vector<int>v(n+1);
     for(int i = 0 ; i<n ; i++){
        int temp;
        cin>>temp;
        v[temp] ++;
     }
     auto max_it = max_element(v.begin(),v.end());
     int max_num = *max_it;
     cout<<n-max_num<<endl;

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