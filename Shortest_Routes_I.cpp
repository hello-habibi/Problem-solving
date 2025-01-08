#include <bits/stdc++.h>
using namespace std;
#define INF 1e18

int n, m;

// Function to perform Dijkstra's algorithm
void dijkstra(int source, const vector<vector<pair<int, int>>>& adjList) {
    vector<long long> dist(n + 1, INF); // Initialize distances to infinity
    dist[source] = 0;

    // Priority queue to store (distance, vertex) pairs
    priority_queue<pair<long long, int>, vector<pair<long long, int>>, greater<pair<long long, int>>> pq;
    pq.push({0, source});

    while (!pq.empty()) {
        // Extract the vertex with the smallest distance
        int u = pq.top().second;
        long long d = pq.top().first;
        pq.pop();

        // If the distance is outdated, skip it
        if (d > dist[u]) continue;

        // Explore neighbors
        for (const auto& neighbor : adjList[u]) {
            int v = neighbor.first;
            int weight = neighbor.second;

            // Relaxation step
            if (dist[u] + weight < dist[v]) {
                dist[v] = dist[u] + weight;
                pq.push({dist[v], v});
            }
        }
    }

    // Output the shortest distances
    for (int i = 1; i <= n; ++i) {
        if (dist[i] == INF) {
            cout << "INF ";
        } else {
            cout << dist[i] << " ";
        }
    }
    cout << endl;
}

int main() {
    cin >> n >> m; // Number of vertices and edges
    vector<vector<pair<int, int>>> adjList(n + 1); // 1-indexed graph
    for (int i = 0; i < m; i++) {
        int a, b, w;
        cin >> a >> b >> w; // Input edge (a -> b with weight w)
        adjList[a].push_back({b, w});
    }
    dijkstra(1, adjList); // Assuming source vertex is 1

    return 0;
}
