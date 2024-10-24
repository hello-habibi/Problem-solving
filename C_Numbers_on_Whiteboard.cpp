#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, b;
        cin >> n;
        cout << 2 << endl;
        a = n - 1;
        b = n;
        cout << a << " " << b << endl;

        if (n > 2)
        {
            for (int i = n - 2; i > 0; i--)
            {
                b = (a + b +1)/2;
                a = i;
                cout<<a <<" "<<b<<endl;
            }
        }
    }

    return 0;
}