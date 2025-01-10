#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

const int N = 1010;
int n , m , arr[N][N];
struct edge
{
    int to , cost;
};

vector<edge> p[N];

void solve()
{   
    for(int i = 1 ; i <= n ; i ++)
    {
        for(int j = 0 ; j < p[i].size() ; j ++)
        {
            arr[i][p[i][j].to] = p[i][j].cost;
        }
    }
    for(int i = 1 ; i <= n ; i ++)
    { 
        for(int j = 1 ; j <= n ; j ++) 
        cout<<arr[i][j]<<" ";
        cout<<'\n';
    }
}

int main()
{
    cin>>n>>m;
    for(int i = 0 ; i < m ; i ++)
    {
        int from , to;
        cin>>from>>to;
        p[from].push_back((edge){to,1});
        p[to].push_back((edge){from,1});
    }
    solve();
}