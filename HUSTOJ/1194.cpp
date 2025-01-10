#include <bits/stdc++.h>

using namespace std;
const int N = 5010;
int n , m , cnt;
struct node {
    int l , w;
}mu[N];

bool cmp(node a , node b)
{
    if(a.l <= b.l) return a.w < b.w;        
}
int main()
{
    cin>>n;
    for(int i = 0 ; i < n ; i ++)
    {
        while(m --)
        {
            cnt = 0;
            memset(mu,-1,sizeof node);
            while(cin>>mu[i].l>>mu[i].w);
            sort(mu,mu+n,cmp);
            if(mu[i].l <= mu[i + 1].l && mu[i].w <= mu[i + 1].w) cnt++;
        }
    }
}