#include<bits/stdc++.h>
using namespace std;
int n,m,x = 0,y;
long long ans=0;
int main()
{
	cin>>n;
	for(int i = 1 ; i <= n ; i ++)   
    {
        cin>>y;
        if( y > x ) ans += y - x;  
    }
    cout<<ans;
	return 0;
}