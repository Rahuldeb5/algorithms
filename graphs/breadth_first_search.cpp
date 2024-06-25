#include <bits/stdc++.h>
using namespace std;

const int N = 1e9;  // change to number of vertices in the graph
vector<int> adj[N]; // adjacency list containing all the edges of the graph
bool visited[N];    // visited array checks if a node has been visited before

queue<int> q;       // queue processes nodes in increasing order of their distance
int length[N];      // stores the distance of each node from the starting node

void BFS(int x) {   // x is the starting node
    visited[x] = true;
    length[x] = 0;
    q.push(x);

    while(!q.empty()) {
        int s = q.front(); q.pop();

        for(auto u : adj[s]) {
            if(visited[u]) continue;
            visited[u] = true;
            length[u] = length[s] + 1;
            q.push(u);
        }
    }
}
