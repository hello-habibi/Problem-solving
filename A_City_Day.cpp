#include <bits/stdc++.h>
using namespace std;

int main(){
    int n , x , y;
    cin>>n>>x>>y;
    vector<int> v;
    for(int i =0 ; i<n; i++){
        int temp; 
        cin>>temp ;
        v.push_back(temp);
    }
    for(int i = 0 ;  i<n ; i++){
        bool flag = true;
         // goto left side 
        for (int j = i-1; j>= 0 and j >= i-x and flag ; j--){
            if(v[i] >= v[j]) flag = false;
        }
        for(int j = i+1 ; j<n and j<=y+i and flag; j++){
            if(v[i] >= v[j]) flag = false;
        }

    if(flag) {
        cout<<i+1<<endl;
        return 0;
    }
        

    }

    return 0;
}