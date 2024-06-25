#include <bits/stdc++.h>
using namespace std;

const int N = 1e9;      // change to number of vertices in the graph
vector<int> adj[N];     // adjacency list containing all the edges of the graph
bool visited[N];        // visited array checks if a node has been visited before

void voidDFS(int x) {   // simple dfs that visits all the nodes in a connected component
    if(visited[x]) return;
    visited[x] = true;

    for(auto u : adj[x]) {
        voidDFS(u);
    }
}


int intDFS(int x) {     // simple dfs that visits and counts the number of nodes in a connected component
    if(visited[x]) return;
    visited[x] = true;
    int count = 1;

    for(auto u : adj[x]) {
        count += intDFS(u);
    }

    return count;
}
