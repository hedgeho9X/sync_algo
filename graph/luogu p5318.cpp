//https://www.luogu.com.cn/problem/P5318
#include <bits/stdc++.h>
using namespace std;

const int N = 100010;
bool st[N];
vector <int> arr[N];
int n , m ;
queue <int> que;

void dfs(int x)
{
    st[x] = true;
    cout<<x<<" ";
    for (int i : arr[x]) if (!st[i]) dfs(i);
}

void bfs(int x)
{
    que.push(x);
    cout<<x<<" ";
    st[x] = true;
    while(!que.empty())
    {
        int t = que.front();
        que.pop();
        for(int i : arr[t]) 
            if(!st[i])
            {
                que.push(i);
                cout<<i<<" ";
                st[i] = true;
            }        
    }
}

int main()
{
    cin>>n>>m;
    while(m --)
    {
        int u , to;
        cin>>u>>to;
        arr[u].push_back(to);
    }
    for(int i = 1;i<=n;i++){
        sort(arr[i].begin(),arr[i].end());
    }
    dfs(1);
    cout<<endl;
    memset(st,0,sizeof(st));
    bfs(1);
}