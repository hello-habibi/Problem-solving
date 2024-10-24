#include <iostream>
using namespace std;

int main()
{
    int n, sx = 0, cx = 0;
    cin >> n;
    string s;
    cin >> s;
    for (char ch : s)
    {
        if (ch == 'x')
        {
            sx++;
        }
        else
        {
            cx++;
        }
    }
    cout << abs(cx - sx) / 2 << endl;
    if (sx == cx)
    {
        cout << s;
    }
    else if (sx > cx)
    {
        sx = (n - cx) / 2;
        for (int i = 0; i < n; i++)
        {
            if (sx && s[i] == 'x')
            {
                s[i] = 'X';
                sx--;
            }
            if (!sx)
                break;
        }
        cout << s << endl;
    }
    else
    {
        cx = (n - sx) / 2;
        for (int i = 0; i < n; i++)
        {
            if (cx && s[i] == 'X')
            {
                s[i] = 'x';
                cx--;
            }
            if (!cx)
                break;
        }
        cout << s << endl;
    }

    return 0;
}