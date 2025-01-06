#include <bits/stdc++.h>

using namespace std;
using ll = long long;

ll a,b,c;
ll solve(ll a,ll b)
{
    if(b==1) return a%c;

    ll ret = solve(a,b/2);
    ret= (ret*ret)%c;
    if(b%2) ret= (ret*a)%c;
    return ret;
}
int main()
{
    cin>>a>>b>>c;
    cout<<solve(a,b);
}


/*
    c가 매우매우 큰 경우도 생각해야 한다
*/