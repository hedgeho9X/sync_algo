#include<bits/stdc++.h>
#define int long long
#define endl '\n'
#define PII pair<int, int>
using namespace std;
const int N = 1e5 + 10;
int dist[N];
int dp[N];
struct node {
    int x, step, type;
};
int n, m;

vector<vector<node> > g;

void dijkstra() {

    memset(dist, 0x3f, sizeof dist);
    dist[1] = 0;
    
    priority_queue<PII> q;

    q.push({ 0, 1 });


    while (q.size()) {

        auto t = q.top(); q.pop();
        int d = t.first, v = t.second;
        if (dist[v] < -d) continue;
        for (node i : g[v]) {
            int j = i.x, w = i.step, tp = i.type;
            if (dist[j] >= w - d) {
                if (tp) {
                    if (dist[j] != w - d) dp[j] = dp[v] + 1; // 从1到j，最短路的情况下，反转了几次
                    else dp[j] = min(dp[j], dp[v] + 1);
                } else dp[j] = dp[v];
                 
                dist[j] = w - d;
                q.push({ -dist[j], j });
            }
             
        }

    }

}

signed main() {

    cin >> n >> m;
    g.resize(n + 1);
    for (int i = 0; i < n; i ++ ) {
        int op, x, y, z;
        cin >> op >> x >> y >> z;
        g[x].push_back({ y, z, 0 });
        if (op == 0) {
            g[y].push_back({ x, z, 1 });
        } else {
            g[y].push_back({ x, z, 0 });
        }
    }
    dijkstra();
    cout << dist[n] << " " << dp[n] << endl;
    return 0;

}
/*
1
1000
5

*/