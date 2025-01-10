#include <iostream>

using namespace std;
const int N = 1010;
int arr[N];

int main()
{
    int n , ans = 0;
    cin>>n;
    for(int i = 0 ; i < n ; i ++)
    {
        int x;
        scanf("%d",&x);
        arr[x]++;
        if(arr[x] == 1) ans ++;
    }
    cout<<ans<<endl;
    for(int i = 0 ; i <= 1000 ; i ++) 
        if(arr[i]) cout<<i<<" ";
}