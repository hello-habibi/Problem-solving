#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        int n = str.size() - 1;
        int f_one = -1, l_one = -1;
        int ans = 0;

        for (int i = 0; i <= n; i++)
        {
            if (str[i] == '1')
            {
                f_one = i;
                break;
            }
        }

        for (int i = n; i >= 0; i--)
        {
            if (str[i] == '1')
            {
                l_one = i;
                break;
            }
        }

        if (f_one != -1 && l_one != -1)
        {
            for (int i = f_one; i <= l_one; i++)
            {
                if (str[i] == '0')
                {
                    ans++;
                }
            }
        }

        cout << ans << endl;
    }

    return 0;
}
