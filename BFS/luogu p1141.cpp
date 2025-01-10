#include <bits/stdc++.h>

using namespace std;
const int N = 1010;
int n , m , groups; 
int arr[N][N] , st[N][N] , ans[N * N] ;
typedef pair<int,int> PII;
PII p[N][N];


int bfs(int i, int j)
{
    int dx[4] = {-1 , 0 , 1 , 0} , dy[4] = { 0 , 1 , 0 , -1};
    queue<PII> que;   
    if(st[i][j]) return ans[st[i][j]];
    else groups ++;
    ans[groups] ++;
    que.push({i , j});
    st[i][j] = groups;
    while(!que.empty())
    {
        PII t = que.front();
        que.pop();
        for(int i = 0 ; i < 4 ; i ++)
        {
            int a = t.first + dx[i] , b = t.second + dy[i];
            if(a <= n && b <= n && a >= 1 && b >= 1 && (!st[a][b]) && arr[t.first][t.second]!=arr[a][b] )
            {
                st[a][b] = groups;
                ans[groups] ++;
                que.push({a,b});
            }
        }
    }
    return ans[groups];
}

void solve()
{
    int i , j;
    cin>>i>>j;
    cout<<bfs(i,j)<<endl;
}

int main()
{
    cin>>n>>m;
    for(int i = 1 ; i <= n ; i ++) 
        for(int j = 1 ; j <= n ; j ++)
        {
            char c;
            cin>>c;
            arr[i][j] = c - '0';  
        }
    while(m--)
    solve();
}