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
    ll a , b, c , n , total;
    cin>>a>>b>>c>>n;
    total = a + b + c + n;

    if(total % 3 != 0){
        no;
        
    }else{
        int mid = total / 3;
        if(a > mid or b > mid or c > mid){
            no;
        }else{
            yes;
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