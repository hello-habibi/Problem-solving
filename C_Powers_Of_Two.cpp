#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n, k;
    cin >> n >> k;

    priority_queue<long long> pq;
    long long count_high = 0;
    if(n<k){
        cout<<"NO"<<endl;
        return ;
    }

    for (int i = 31; i >= 0; i--)
    {
        if (n & (1 << i))
        {
            pq.push(1 << i);
            count_high++;
        }
    }


    if (count_high > k)
    {
        cout << "NO" << endl;
        return;
    }


    while (pq.size() < k)
    {
        long long temp = pq.top();
        pq.pop();

        pq.push(temp / 2);
        pq.push(temp / 2);
    }

    cout << "YES" << endl;
    vector<long long> result;
    while (!pq.empty())
    {
        cout<<(pq.top())<<" ";
        pq.pop();
    }

    cout << endl;
}

int main()
{
    solve();
    return 0;
}
 