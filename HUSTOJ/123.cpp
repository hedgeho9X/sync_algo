#include<bits/stdc++.h>
 
int k,n,tot = 1,cnt;
int prime[20] = {2,3,5,7,11,13,17,19};

int main(){
    int t;
    std::cin>>t;
    while(t--){
        cnt = 0;
        tot = 1;
        std::cin>>n>>k;
        for(int i = 0;i<8&&prime[i]<=k;i++)
        {
            int a = 1;
            do
            {
                a * =prime[i];
            }
            while(a*prime[i]<=k);
            tot*=a;
            
        }
        cnt=n/tot;
        std::cout<<cnt<<'\n';
    }
}
/*
1
1000
5

*/