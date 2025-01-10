#include <bits/stdc++.h>

using namespace std;
const int N = 5e5 + 10;
vector<int> arr[N];
int n ,m ;

void solve()
{
    for(int i = 1 ; i <= n ; i ++)   sort(arr[i].begin(),arr[i].end());
    for(int i = 1 ; i <= n ; i ++)
    {
        for(int j = 0 ; j < arr[i].size() ; j ++)   cout<<arr[i][j]<<" ";
        cout<<'\n';
        arr[i].clear();
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        while( m -- )
        {
            int from , to;
            cin>>from>>to;
            arr[from].push_back(to);
        }
        solve();
    }
}