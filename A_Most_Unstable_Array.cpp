#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    ll m, n;
    cin >> n >> m;

    if (n == 1)
    {
        cout << 0 << endl;
    }
    else if (n == 2)
    {
        cout << m << endl;
    }else
    {

        cout << (m * 2) << endl;
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
