#include <bits/stdc++.h>
using namespace std;

void solution()
{
    int n;
    cin >> n;
    int oddCount = 0, evenCount = 0;
    int temp;

    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        if (temp & 1)
        {
            if (!(i & 1))
            {
                oddCount++;
            }
        }
        else
        {
            if ((i & 1))
            {
                evenCount++;
            }
        }
    }
    if(oddCount == evenCount){
        cout << oddCount << endl;

    }else{
        cout<< -1 <<endl;
    }
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