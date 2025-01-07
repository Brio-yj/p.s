#include<iostream>

using namespace std;
using ll = long long;
ll res;

ll ppow(ll a,ll b,ll c){
    if(b==1) return a%c;
    res=ppow(a,b/2,c);
    res= (res * res)%c;
    if(b%2==0) return res;
    return (res * a) % c;
}

int main(){
    cin.tie(0);
    ll a,b,c;
    cin>>a>>b>>c;
    cout<<ppow(a,b,c);
}
//재귀 할때 함수 돌린 값을 받아줘야 한다