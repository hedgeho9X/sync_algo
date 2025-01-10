//https://www.acwing.com/problem/content/96/

#include <iostream>

using namespace std;

const int N = 9;
int n , st[N] , path[N];

void dfs(int u)
{
	if( u == n+1 ) 
	{
		for(int i = 1 ; i <= n ; i ++)
			cout<<path[i]<<" ";
		cout<<endl; 
		return;
	}
	for(int i = 1 ; i <= n ; i ++)
		if (st[i] == 0)	
		{
			st[i] = 1;
			path[u] = i;
			dfs(u+1);
			st[i] = 0;
		}
}


int main()
{
	cin>>n;
	dfs(1);
}