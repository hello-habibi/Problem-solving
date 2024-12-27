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
    string pass, hash;
    cin>>pass>>hash;
    sort(pass.begin(), pass.end());

    if(hash.size()<pass.size()){
        no return;
    }
    for(int i = 0; i <= hash.size()- pass.size(); i++){
        string s1= hash.substr(i,pass.size());
        sort(s1.begin(), s1.end()) ;
        if(s1== pass){
            yes return;
        }
    }no return;
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