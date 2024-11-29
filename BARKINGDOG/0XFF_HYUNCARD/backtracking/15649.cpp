#include <bits/stdc++.h>

using namespace std;

int n,m;

int res[9];
int vis[9];

void solve(int k){
    if(k==m){
        for(int i=0;i<m;i++){
            cout<<res[i]<<" ";
        }
        cout<<"\n";
    }
    for(int i=0;i<n;i++){
        if(vis[i]==1) continue;
        res[k]=i;
        vis[i]=1;
        solve(k);
        vis[i]=0;
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>m;
    solve(1);
}