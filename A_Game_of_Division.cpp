#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> v, nk;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        v.push_back(temp);
    }
    bool flag = true;
    for(int i = 0 ; i< n ; i++){
        set<int >s;
        bool divisible = false;

        for(int j = 0 ; j<n; j++){
            if(i == j ){
                continue;
            }
            int temp = abs(v[i] - v[j]);
            if(temp % k == 0){
                divisible = true;
                break;
            }
            s.insert(temp);
        }
        if(!divisible){
            cout<<"YES"<<endl;
            cout<<i+1<<endl;
            flag = false;
            break;
        }

    }
    if(flag){
        cout<<"NO"<<endl;
    }

}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
