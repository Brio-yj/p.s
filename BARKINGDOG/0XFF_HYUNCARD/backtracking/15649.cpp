#include <bits/stdc++.h>

using namespace std;

int n,m;

int res[9];
int vis[9];

void solve(int k){
    if(k==m+1){
        for(int i=1;i<=m;i++){
            cout<<res[i]<<" ";
        }cout<<"\n";
    }
    for(int i=1;i<=n;i++){
        if(vis[i]==0){
            res[k]=i;
            vis[i]=1;
            solve(k+1);
            vis[i]=0;
        }
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>m;
    solve(1);
}