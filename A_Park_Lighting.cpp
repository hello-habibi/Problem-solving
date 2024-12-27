#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int m, n;
        cin >> m >> n;
        int ans ;
        if ((m % 2 == 0 && n % 2 == 0))
        {
            int rowBase = (m * ((n) / 2));
            int collumBase = (n * ((m) / 2));
            ans = min(rowBase, collumBase) ;
        }
        else if (m % 2 == 0 &&n % 2 == 1)
        {
             ans = (m * (n / 2)) + (m/2);
        }else if(n % 2 == 0  and m % 2 ==1){
             ans = (n * (m/2)) + (n/2);
        }else{
            int low , high;
            low = min(m , n);
            high = max(m , n);
            ans = (low * (high / 2)) + ((low+ 1)/2);
        }
        cout<<ans<<endl;
    }
    return 0;
}
