#include <bits/stdc++.h>
#define x first
#define y second

using namespace std;

int board[502][502];
int vis[502][502];
int n=7,m=8;

int dx[4]{1,-1,0,0};
int dy[4]{0,0,1,-1};

queue<pair<int,int>> q;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    vis[0][0] = 1;
    q.push({0,0});
    while(!q.empty()){
        pair<int,int> cur = q.front();
        q.pop();
        for(int i=0;i<4;i++){
            int nx = cur.x + dx[i];
            int ny = cur.y + dy[i];

            if(nx<0 || nx>=n || ny<0 || ny>=m) continue;
            if(vis[nx][ny] || !board[nx][ny]) continue;

            vis[nx][ny]=1;
            q.push({nx,ny});
        }
    }
}