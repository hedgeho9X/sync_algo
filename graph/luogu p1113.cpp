//https://www.luogu.com.cn/problem/P1113

#include <bits/stdc++.h>

using namespace std;
const int N = 100010;
int n , node[N] , res[N] , cnt ;
bool st[N];
vector<int> arr[N]; 

int dfs(int u)
{
    if(res[u]) return res[u];
    for(int i : arr[u])  res[u] = max( res[u] , dfs(i));
    res[u] += node[u];
    return res[u];     
}

void solve()
{
    cout<<dfs(1);
} 

int main()
{
    cin>>n;
    for(int i = 0 ; i < n ; i ++)
    {
        int to , cost , from;
        cin>>to>>node[to];
        while(cin>>from)
        {
            if(!from) break;
            arr[from].push_back(to);
        }
    }
    solve();
}