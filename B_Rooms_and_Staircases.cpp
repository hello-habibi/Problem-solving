#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int start = -1, end_point = -1;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                if (start == -1)
                {
                    start = i;
                }
                end_point = i+1 ;
            }
        }
        if(start != -1)  start = max(start , n - start);
        int count = max (start , end_point);
        if( start < 0 and end_point < 0){
            cout<<n<<endl;
        }else{
         cout<<count*2<<endl;
        }
 
    }

    return 0;
}