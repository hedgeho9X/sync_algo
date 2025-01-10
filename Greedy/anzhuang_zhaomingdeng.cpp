//http://172.21.4.3/problem.php?cid=1107&pid=8
#include <iostream>

using namespace std;

const int N = 10010;
int arr[N] , st[N] , cnt ,n;
void solve()
{
    cnt = 0;
    for(int i = 0  ; i < n ; i ++) st[i] = 0;
    for(int i = 1 ; i < n - 1 ;)
    {
        if(arr[i] > arr[i - 1])
        {
            if(arr[i] > arr[i + 1]) 
            {
                st[i-1] = 1;
                st[i] = 1;
                st[i + 1] = 1;
                i += 3;
                cnt++;
            }
            if(arr[i] <= arr[i + 1])
            {
                st[i]  = 1;
                st[i - 1] = 1;
                i += 2;
                cnt++;   
            }
        }
        else if(arr[i] == arr[i - 1])
        {
            st[i - 1] = 1;
            i ++; 
            cnt++;
        }
        else if(arr[i] < arr[i - 1])
        {
            st[i - 1] = 1;
            st[i] = 1;
            i += 2;
            cnt++; 
        }
    }
    if( st[n - 1 ] == 0 )
    {
        cnt ++;
        if(st[ n - 2 ] == 0) 
        {
            if(arr[n - 2] == arr[ n - 1])
            cnt++;
        }

    }
    cout<<cnt<<endl;
}
signed main()
{
    while(cin>>n)
    {
        if ( n == 0) break;
        for(int i = 0 ; i < n ; i ++)
        {
            cin>>arr[i];
        }
        solve();
    }
    return 0;
}