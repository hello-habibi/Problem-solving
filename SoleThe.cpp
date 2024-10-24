#include <bits/stdc++.h>
using namespace std;

int main()
{
    string num;
    cin>>num;
    
    for (int i = 0; i<num.size(); i++){
        if(i==0 &&  num[i] =='9'){
            continue;
        }
        if(num[i]>= '5' && num[i]<='9'){
            num[i]='0' +'9'-num[i];
        }
    }
    cout<<num;

    return 0;
}