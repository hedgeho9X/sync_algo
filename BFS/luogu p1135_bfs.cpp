#include <bits/stdc++.h>

using namespace std;
const int N = 250;
int n , a ,b ;
int arr[N];
int st[N];
int rec[N];
queue<int> que;

int bfs(int u)
{
    que.push(u);
    while(!que.empty())
    {
        int t = que.front();
        st[t] = true;
        que.pop();
        if( t == b ) return rec[b] ;
        int j = t - arr[t] , k = t + arr[t];
        if( j > 0 && !st[j] )
        {
            que.push(j);
            rec[j] = rec[t] + 1;
            st[j] = true;
        }
        if( k <= n && !st[k]) 
        {
            que.push(k);
            rec[k] = rec[t] + 1;
            st[k] = true;
        }    
    }
    return -1;
}

int main()
{
    cin>>n>>a>>b;
    for(int i = 1 ; i <= n ; i ++) cin>>arr[i];  
    cout<<bfs(a);
}