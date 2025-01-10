// https://www.acwing.com/problem/content/94/
// 2025.1.10

#include<iostream>

using namespace std;

const int N = 15;
int st[N] , n;

void dfs(int u)
{
    if (u == n)
    {
        for(int i = 0 ; i < n ; i ++)
            if(st[i] == 1) cout<<i + 1<<" ";
        puts("");
        return;
    }
    st[u] = 2;
    dfs(u+1);
    st[u] = 1;
    dfs(u+1);
    st[u] = 0;
}

int main()
{
    scanf("%d",&n);
    dfs(0);
}