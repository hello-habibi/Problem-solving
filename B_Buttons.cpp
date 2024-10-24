#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int sum =0, k ,m;
    k = 0 ;
    m=n;
    while (n > 0)
    {

        if(n==1){
            sum+=1;
            break;
        }
        sum+= n;
        sum+= k*(n-1);
        k ++;
    n--;
    }
    cout<<sum<<endl;
    


    return 0;
}