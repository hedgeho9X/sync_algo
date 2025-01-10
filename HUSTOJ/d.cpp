#include <bits/stdc++.h>

using namespace std;
int arr[3];
int main()
{
    int t;
    cin>>t;
    while(t --)
    {
        string a;
        cin>>a;
        memset(arr,0,sizeof(arr));
        int len = a.size();
        for(int i = 0 ; i < len; i ++)
        {
            if(a[i] == 'S') arr[0] ++;
            else if(a[i] == 'U') arr[1] ++;
            else if(a[i] == 'E')arr[2] ++;
        }   
        arr[0] /= 2;
        sort(arr,arr+3);
        cout<<arr[0]<<endl;
    }
}