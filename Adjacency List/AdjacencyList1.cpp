#include <bits/stdc++.h>
using namespace std;

vector<int> adj[1005];
#define pb push_back

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
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
        cout << i << ":" << ' ';
        cout << adj[i].size() << "\n";
    }  
}
