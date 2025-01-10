#include <iostream>
#include <algorithm>

using namespace std;

struct apple
{
    int x , y;
}apples[5010];

bool cmp(apple a , apple b)
{
    return a.y < b.y;
}
int main()
{
    int n , s , a , b , ans;
    cin>>n>>s>>a>>b;
    for(int i = 0 ; i < n ; i ++ ) scanf("%d%d",&apples[i].x,&apples[i].y);
    sort(apples,apples + n ,cmp);
    for(int i = 0 ; i < n ; i ++ )
    {
        if( s < apples[i].y) break;
        if(a+b >= apples[i].x) 
        {
            s -= apples[i].y;
            ans ++;
        }
    }
    cout<<ans<<endl;
    return 0;
}