#include <bits/stdc++.h>
using namespace std;

int main(){
     
        int t;
        cin>>t;
        while(t--){
            bool notPossible = false;
            int n ;
            string s;
            cin>>n>>s;
            int mid = n/2;
            for(int i = 0 ;i<mid ;  i++ ){
                int diff = s[i] - s[n-1-i];
                diff = abs(diff);
                if(diff == 2 || diff == 0 ){

                    continue;
                }else{
                                        cout<<"NO"<<endl;
                    notPossible = true;
                    break;
                }
            }
            if(!notPossible){
                    cout<<"YES"<<endl;
            }

        }

    return 0;
}