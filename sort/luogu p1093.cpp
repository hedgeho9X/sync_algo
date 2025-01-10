#include <iostream>
#include <algorithm>

using namespace std;

struct student
{
    int a , b , c ;
    int index;
}scores[100010];

bool cmp(student x, student y)
{
    if((x.a+x.b+x.c) == (y.a+y.b+y.c))
    {
    if ( x.a != y.a) return x.a > y.a;
    return x.index < y.index;
    } 
    return (x.a+x.b+x.c) > (y.a+y.b+y.c);
}


int main()
{
    int n;
    cin>>n;
    for(int i = 0 ; i < n ; i ++) 
    {
        scanf("%d%d%d",&scores[i].a,&scores[i].b,&scores[i].c);
        scores[i].index = i + 1; 
    }
    sort(scores,scores+n,cmp);
    for(int i = 0 ; i < 5 ; i ++)  cout<<scores[i].index <<" "<< scores[i].a + scores[i].b + scores[i].c <<endl; 
    return 0;
}