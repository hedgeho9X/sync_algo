//https://www.luogu.com.cn/problem/P3916
#include<bits/stdc++.h>

using namespace std;
int n , m , cnt;
const int N = 1e5 + 10;
vector<int> arr[N];
int ans[N];

void dfs(int x ,int v)
{
    ans[x] = v;
    for(int i : arr[x])   if(!ans[i])  dfs(arr[x][i],v);
}

void solve()
{
    for(int i = n ; i >= 1 ; i --)
    {
        if(ans[i] == 0) dfs(i,i); 
    }
    for(int i = 1 ; i <= n ; i ++)  cout<<ans[i]<<" ";

}

int main()
{
    cin>>n>>m;
    for(int i = 0 ; i < m ; i ++ )
    {
        int from , to ;
        cin>>from>>to;
        arr[to].push_back(from);
    }
    solve();
    return 0;
}