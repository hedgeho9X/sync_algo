#include<bits/stdc++.h>

struct student { 
    int CN;
    int Math;
} x[2000];

bool cmp(student x,student y) { 
    return x.Math < y.Math;//���� ��С���� < 
}

using namespace std;

int main() {
    int n;
    scanf("%d",&n);
    for(int i=1; i<=n; i++)		cin>>x[i].CN>>x[i].Math;//���������ݣ�

    sort(x+1,x+n+1,cmp);//���սṹ���е�Math��������

    for(int i=1; i<=n; i++)		cout<<"CH:"<<x[i].CN<<"Math: "<<x[i].Math<<" ";//���������ݣ�
    return 0;
}