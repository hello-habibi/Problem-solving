#include <bits/stdc++.h>
using namespace std;



void topological_Sort(vector<vector<int>> &adj , int v){
    stack<int>st;
    vector<bool> visited(v , false);

}

int main(){
    int v = 4 ;
    vector<vector<int>> adj(v);
    vector<vector<int>> edges = { { 0, 1 }, { 1, 2 }, { 3, 1 }, { 3, 2 } };
    for(auto i : edges){
        adj[i[0]].push_back(i[1]);
    }
    cout<<"TopoLogical Sort of the graph := ";
topological_Sort(adj , v);


    return 0;
}