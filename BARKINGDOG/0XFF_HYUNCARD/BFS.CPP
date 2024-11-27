#include <bits/stdc++.h>
#define x first
#define y second

using namespace std;
using qint = queue<pair<int,int>>;
using intPair = pair<int,int>;

int board[502][502];
int vis[502][502];
int dx[4] = {1,-1,0,0};
int dy[4] = {0,0,1,-1};
int n=7, m=8;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    qint q;
    q.push({0,0});
    vis[0][0]=1;
    while(!q.empty()){
        intPair cur = q.front();
        q.pop();
        for(int dir=0;dir<4;dir++){
            int nx = cur.x + dx[dir];
            int ny = cur.y + dy[dir];
            if(nx<0 || nx>=n || ny<0 || ny>=m) continue;
            if(vis[nx][ny] || board[nx][ny]!=1) continue;
            q.push({nx,ny});
            vis[nx][ny]=1;
        }
    }


}