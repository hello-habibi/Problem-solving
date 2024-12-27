#include <bits/stdc++.h>
using namespace std;

#define no cout<<"NO"<<endl;
#define yes cout<<"YES"<<endl;
#define vl vector<long long>
#define vi vector<int>
#define vs vector<string>
#define iip pair<int,int>
#define lip pair<long long , int>
#define isp pair<int,string>
#define ss stack<string>
#define is stack<int>
#define pb push_back
#define ll long long


void solution (){
    int n , r , temp , ans =0 , odd_count = 0 ; 
    cin >> n >> r; 
    for(int i = 0 ; i< n; i ++){
        cin >>temp;
        if(temp % 2  == 0){
            r -= (temp / 2);
            ans+=temp;
        }else{
            r -= (temp / 2 );
            odd_count++ ;
            ans += (temp-1);
        }
    }
    if(odd_count % 2 == 1){
        r-= ( odd_count / 2);
        r--;
        odd_count--;
        ans++;
        
    }else{
        r -=(odd_count / 2);

    }

    if(r > (odd_count/2) ){
        ans +=  odd_count;
    }else{
        ans += (r * 2);
    }
    cout<<ans<<endl;

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