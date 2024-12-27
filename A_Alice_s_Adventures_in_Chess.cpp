#include <bits/stdc++.h>
using namespace std;

#define no cout << "NO" << endl;
#define yes cout << "YES" << endl;
#define vl vector<long long>
#define vi vector<int>
#define vs vector<string>
#define iip pair<int, int>
#define lip pair<long long, int>
#define isp pair<int, string>
#define ss stack<string>
#define is stack<int>
#define pb push_back
#define ll long long

void solution()
{
    int n, a, b, x = 1, y = 1;
    string way;
    cin >> n >> a >> b >> way;

    while ((x < a and y < b))
    {
        for (char ch : way)
        {
            if (ch == 'E')
            {
                x++;
            }
            else if (ch == 'N')
            {
                y++;
            }
            else if (ch == 'S')
            {
                y--;
            }
            else
            {
                x--;
            }

            if (x == a and y == b)
            {
                yes;
                return;
            }
        }
        if (x == 0 and y == 0)
        {
            no;
            return;
        }
    }
    no;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solution();
    }

    return 0;
}