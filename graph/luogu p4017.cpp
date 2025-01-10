//https://www.luogu.com.cn/problem/P4017
#include <bits/stdc++.h>

using namespace std;
const int N = 5010;
vector<int> arr[N];
int n , m , res[N] , in[N] , out[N];
long long cnt;
queue<int> q;

void toposort()
{

}
void solve()
{

}

int main()
{
    cin>>n>>m;
    for(int i = 0 ; i < m ; i ++)
    {
        int from , to;
        cin>>from>>to;
        arr[from].push_back(to);
    }
    solve();
}