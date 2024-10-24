#include <bits/stdc++.h>
using namespace std;

int main(){
int t;
cin>>t;
while (t--)
{
        long long a ,b,n;
    cin>>a>>b>>n;
    int result =0;
    int minimum = min(a,b);
    int maximum = max(a,b);
    while (maximum <= n )
    {
        int temp_min = maximum + minimum;
        minimum = maximum;
        maximum = temp_min;
        result ++;

    }
    cout<< result<<endl;
    
}

    return 0;
}