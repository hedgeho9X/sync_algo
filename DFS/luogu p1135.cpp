#include <iostream>

using namespace std;
const int N = 210;
const int INF = 0x7f7f7f7f;
int arr[N] , st[N] ,st2[N], ans = INF, n , a , b ;

void dfs(int u ,int op)
{
    if(u > n || u  <= 0 || st[u] == 1||st2[u]<op) 
    {
        return ;
    }
    if( u == b) 
    {
        ans = min(ans , op);
        return;
    }
    st2[u] = op;
    st[u] = 1;
    dfs(u - arr[u],op+1);
    dfs(u + arr[u],op+1);
}
int main()
{
    cin>>n>>a>>b;
    
    for(int i = 1 ; i <= n ; i ++)   {cin>>arr[i];st2[i] = INF;}
    dfs(a,0);
    if( ans > 19999999 ) cout <<-1;
    else cout<<ans;
}