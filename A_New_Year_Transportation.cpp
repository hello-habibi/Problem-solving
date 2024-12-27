#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, t , position = 1 , next;
    cin >> n >> t;

    vector<int> v;

    for (int i = 1; i < n; i++)
    {
        int temp;
        cin >> temp;
        v.push_back(temp);
    }
    while(position < t){
        next = position + v[position-1];
        position = next;
    }
    if(position == t) cout<<"YES"<<endl;
    else cout << "NO" << endl;

    return 0;
}