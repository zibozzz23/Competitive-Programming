#include <bits/stdc++.h>
using namespace std;

#define pb push_back
vector<int> adj[1005]; bool visit[1005];

void dfs(int u){
    visit[u] = true;
    cout << u << ' ';

    for(int v : adj[u]){
        if(!visit[v]){
            dfs(v);
        }
    }
}

int main(){
    int n, m;
    cin >> n >> m;

    for(int i = 0; i < m; ++i){
        int u, v;
        cin >> u >> v;
        adj[u].pb(v);
        adj[v].pb(u);
    }

    for(int i = 1; i <= n; ++i){
        sort(adj[i].begin(), adj[i].end());
    }

    dfs(1);
}
