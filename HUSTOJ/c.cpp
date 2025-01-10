#include<bits/stdc++.h>

using namespace std;
const int N = 1010;
int arr[N];

bool cmp(int a , int b)
{
    return a > b;
}
int main()
{
    int t;
    cin>>t;
    while(t --)
    {
        int n , w , cnt = 0;
        memset(arr, 0 , sizeof(arr));
        cin>>n>>w;
        for(int i = 0 ; i < n ; i ++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n,cmp);
        int i = 0;
        while(w > 0)
        {
            cnt ++;
            w -= arr[i ++];
        }
        cout<<cnt<<endl;
    }
}