//https://www.acwing.com/problem/content/96/

#include <iostream>

using namespace std;

const int N = 9;
int n , st[N];

void dfs(int u)
{
	if( u == n+1 ) 
	{
		for(int i = 1 ; i <= n ; i ++)
			cout<<st[i]<<" ";
		cout<<endl; 
		return;
	}
	for(int i = 1 ; i <= n ; i ++)
	{
		if (st[i] == 0)	
		{
			st[i] = u;
			dfs(u+1);
			st[i] = 0;
/**
st数组是表示第i个位置而不是第i个数！！，解决这个问题
1.用st数组同时表示第I个数是否被选取。
2.建立两个数组->序列数组&状态数组。
**/
		}
		
	}
}

int main()
{
	cin>>n;
	dfs(1);
}