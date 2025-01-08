// ----->>>> HELLO HABIBI <<<<-----
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int count = 0;

    for (int i = 0; i < n - 1; i++)
    {
        int j =i +1;
        if ((2 * v[i] > v[j]) && (2 * v[j] > v[i]))
        {
            count++;
        }
    }
    if(count>0){
        cout<<"YES"<<endl;
        return;
    }
    cout << "NO" << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
