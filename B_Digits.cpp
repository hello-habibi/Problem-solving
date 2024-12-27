#include <bits/stdc++.h>
using namespace std;

long long clcFacMod(long long n, int m)
{
    long long fact = 1;
    for (long long i = 2; i <= n; i++)
    {
        fact = (fact * i) % m;
        if (fact == 0)
        {
            break;
        }
    }
    return fact;
}

bool checkSeven(long long n, int digit)
{
    long long factorialMod7 = clcFacMod(n, 7);
    return (factorialMod7 * (digit % 7)) % 7 == 0;
}

void solve()
{
    long long n;
    int digit;

    cin >> n >> digit;
    vector<int> s;
    s.push_back(1);

    long long sumMod3 = clcFacMod(n, 3) * (digit % 3);
    long long sumMod9 = clcFacMod(n, 9) * (digit % 9);

    if (sumMod3 % 3 == 0)
    {
        s.push_back(3);
    }
    if (digit == 0 || digit == 5)
    {
        s.push_back(5);
    }
    if (checkSeven(n, digit))
    {
        s.push_back(7);
    }
    if (sumMod9 % 9 == 0)
    {
        s.push_back(9);
    }
    for (int num : s)
    {
        cout << num << " ";
    }
    cout << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
