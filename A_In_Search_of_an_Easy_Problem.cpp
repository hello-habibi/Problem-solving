#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int t;
    string ans = "EASY";
    while (n--)
    {
        cin >> t;
        if (t == 1)
        {
            ans = "HARD";
        }
    }
    cout << ans << endl;

    return 0;
}