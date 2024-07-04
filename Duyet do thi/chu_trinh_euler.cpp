#include<bits/stdc++.h>
using namespace std;

void findEuler(int u, vector<vector<int>>& adj) {
    for (int v = 0; v < adj[u].size(); v++) {
        if (adj[u][v]) {
            adj[u][v]--; adj[v][u]--;
            findEuler(v, adj);
        }
    }
    cout << u +1 << " ";
}

int main() {
    int N;
    cin >> N;
    vector<vector<int>> adj(N, vector<int>(N));
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            cin >> adj[i][j];
    findEuler(0, adj);
    return 0;
}
