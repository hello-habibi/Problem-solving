#include<bits/stdc++.h>
using namespace std;
#define sadik() ios::sync_with_stdio(false);cin.tie(0)
#define ll long long int
#define nl '\n'
#define MOD 1e9 + 7

vector<vector<int>>adj;
vector<bool>vis;

void dfs(int vertex){
    vis[vertex] = true;
    for(auto child : adj[vertex]){
        cout << "parent " << vertex << " child " << child << nl;
        if(vis[child]) continue;
        cout << "dfs is called for " << child << nl;
        dfs(child);
    }

}

int main(){     
    int n , m;
    cin >> n >> m;

    vis = vector<bool>(n + 1 , false);
    adj = vector<vector<int>>(n + 1);

    for(int i = 0; i < m; i++){
        int u , v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    dfs(1);
}