#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        for(int i = 1; i<n; i++){
            if(v[i] - v[i-1] == -1){
                swap(v[i] , v[i-1]);
            }
        }
        if(is_sorted(v.begin() , v.end())){
            cout<<"YES"<<endl;

        }else{
            cout<<"NO"<<endl;
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
