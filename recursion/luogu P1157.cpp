#include <iostream>
#include <iomanip>

using namespace std;
const int N = 25;
int ans[N];
int n , r ;

void dfs(int u)
{
    if( u > r )
        {for(int i = 1 ; i <= r ; i ++) 
        {
            cout<<setw(3)<<ans[i];
        }  
        puts("");
        return;
        }      

    int i;
    for( i = ans[u - 1] + 1 ; i <= n ; i ++)
    {
        ans[u] = i;
        dfs( u  + 1 );
    }
}

int main()
{
    cin>>n>>r;
    dfs(1);
    return 0 ;
}
