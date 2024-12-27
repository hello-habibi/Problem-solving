#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int ans = 0;
        int arr[k];
        for (int i = 0; i < k; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + k);

        if (k > 2)
        {
            for (int i = 0; i < k - 1; i++)
            {
                if (arr[i] == 1)
                {
                    ans += 1;
                }
                else
                {
                    ans += (arr[i] * 2) - 1;
                }
            }
        }
        else
        {
            if (arr[0] == 1)
            {
                ans += 1;
            }
            else
            {
                ans += (arr[0] * 2) - 1;
            }
        }
        cout<<ans<<endl;
    }
}