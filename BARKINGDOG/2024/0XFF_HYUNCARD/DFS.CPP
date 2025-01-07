/*

#include <bits/stdc++.h>
#define x first
#define y second
using namespace std;

int board[502][502];
int vis[502][502];
int dx[4]{1,-1,0,0};
int dy[4]{0,0,1,-1};

int n=7,m=8;

void dfs(int x,int y){
    vis[x][y]=1;

    for(int dir=0;dir<4;dir++){
        int nx = x+dx[dir];
        int ny = y+dy[dir];
        if(nx<0 || nx>=n || ny<0 || ny>=m) continue;
        if(board[nx][ny]!=1 || vis[nx][ny]) continue;

        dfs(nx,ny);
    }
} 

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    dfs(0,0);
}

*/

#include <iostream>
#include <utility>
#include <queue>

#define X first
#define Y second

using namespace std;
using iq = queue<int,int>;

int board[502][502];
int vis[502][502];
int dx[4]{1,-1,0,0};
int dy[4]{0,0,1,-1};
int n=7,m=8;

void dfs(int x, int y){
    
    vis[x][y]=1;
    for(int i=0;i<4;i++){
        int nx = x + dx[i];
        int ny = y + dy[i];

        if(nx<0 || nx >=n || ny<0 || ny>=m) continue;
        if(vis[nx][ny]==1 || board[nx][ny]!=1) continue;

        dfs(nx,ny);
    }

}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    dfs(0,0);
}