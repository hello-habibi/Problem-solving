#include <bits/stdc++.h>
using namespace std;

/*
conditoins for Divisible by 60 
 Divisible by 3 -> sum of digits % 3 == 0
Divisible by 2 -> at least one even digit
Divisible by 10 -> at least one '0'
*/

void solve()
{
    string s;
    cin >> s;

    bool haveZero = false;
    int sum = 0 , evenCount = 0 ;

    for (char c : s)
    {
        int digit = c - '0';
        if (digit == 0)
        {
            haveZero = true; 
        }
        if (digit % 2 == 0 )
        {
            evenCount++; 
        }
        sum += digit; 
    }


    if (sum == 0)
    {
        cout << "red" << endl; 
        return;
    }

    if (haveZero and (evenCount > 1) and sum % 3 == 0)
    {
        cout << "red" << endl;
    }
    else
    {
        cout << "cyan" << endl;
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
