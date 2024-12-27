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
    ll l , r , x , y;
    cin>>l >> r;
    x = l;
    y = 2* x;
    if(y <= r) cout<<x << " "<<y<<endl;
    else cout<<-1 <<" "<<-1<<endl;

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