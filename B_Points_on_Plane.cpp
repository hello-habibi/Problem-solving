#include <bits/stdc++.h>
using namespace std;


// for distance 2 the number of points is 9
// distance 3 points till 16
// distance 4 points 25


void solve()
{

    long long number;
    cin>>number;

    
    long long temp = sqrt(number);
    if((temp * temp ) >= number ){
        cout<<temp-1<<endl;
        return ; 
    }

    cout<<temp<<endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
