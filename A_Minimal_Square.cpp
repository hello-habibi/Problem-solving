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
    int a , b; 
    cin>> a >> b ;
    int mini = min(a , b);
    int maxi = max(a , b );
    if((mini * 2 <= maxi)){
        cout<<maxi * maxi<<endl;
    }else if(maxi == mini ){
        cout << pow((maxi *2) , 2) << endl;
    }else{
        cout << pow((mini * 2) , 2) << endl;
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