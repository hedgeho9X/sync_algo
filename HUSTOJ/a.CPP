#include <iostream>
#include <cmath>
using namespace std;
struct node
{
    long long x , y;
}dian[5];
double cnt;
int main()
{
    for(int i = 0 ; i < 4 ; i ++)   cin>>dian[i].x>>dian[i].y;
    dian[4] = dian[0];
    for(int i = 0 ; i < 4 ; i ++)
    {
        cnt += sqrt(pow(dian[i].x - dian[i + 1].x , 2) + pow(dian[i].y - dian[i + 1].y , 2));
    }
    printf("%.2f",cnt);
}