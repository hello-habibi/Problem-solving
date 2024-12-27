#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; 
    string s; 
    cin>>n>>s;
    int start = 0 , end =0;
    for(int i =0 ; i< n ; i++){
        if(s[start] == s[i]){
            start = i;
            end = i;
        }else{
            end++;
        }
        
        if(end-start > 0){
            break;

        }
    }
    if(end -start > 0){
        cout<<"YES"<<endl;
        for(int i = start ; i<= end; i++){
            cout<<s[i];
        }
        cout<<endl;
    }else{
        cout<<"NO"<<endl;
    }

    return 0;
}