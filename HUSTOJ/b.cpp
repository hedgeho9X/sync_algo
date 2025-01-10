#include <bits/stdc++.h>

using namespace std;
int cnt;
void solve(int i)
{ 
    do
    {
        if (cnt == 9) break;
        if (i % 10 > cnt)
            cnt = i % 10;
        i /= 10;
    } while (i / 10);
}

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        long long la, ra, lb, rb;
        cin >> la >> ra >> lb >> rb;
        cnt = 0;
        for (int i = la + lb; i <= ra + rb && cnt != 9; i++)
        {
            solve(i);
        }
        cout<<cnt<<endl;
    }
}