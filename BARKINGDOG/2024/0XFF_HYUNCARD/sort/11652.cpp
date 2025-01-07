#include <bits/stdc++.h>

using namespace std;

using ll = long long;

vector<ll> v;
int n,cnt,maxcnt;
ll maxval;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    for(int i=0;i<n;i++){
        ll num;
        cin>>num;
        v.push_back(num);
    }
    sort(v.begin(),v.end());
    //정렬 

    cnt=1;
    maxval = v[0];
    //처음 잡기

    for(int i=1;i<n;i++){
        if(v[i]!=v[i-1]){
            if(cnt>maxcnt){
                maxval=v[i-1];
                maxcnt=cnt;
            }
            cnt=0;
        }
        cnt++;
        //같을때는 cnt만 
    }
    if(cnt>maxcnt) maxval=v[n-1];
    cout<<maxval;
}