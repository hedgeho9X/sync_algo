#include<bits/stdc++.h>

struct student { 
    int CN;
    int Math;
} x[2000];

bool cmp(student x,student y) { 
    return x.Math < y.Math;//升序 从小到大 < 
}

using namespace std;

int main() {
    int n;
    scanf("%d",&n);
    for(int i=1; i<=n; i++)		cin>>x[i].CN>>x[i].Math;//（读入数据）

    sort(x+1,x+n+1,cmp);//按照结构体中的Math升序排序

    for(int i=1; i<=n; i++)		cout<<"CH:"<<x[i].CN<<"Math: "<<x[i].Math<<" ";//（读入数据）
    return 0;
}