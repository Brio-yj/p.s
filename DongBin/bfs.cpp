#include <bits/stdc++.h>
#define xx first
#define yy second
using namespace std ;

int board[502][502];
int vis[502][502];

int dx[4]{1,-1,0,0};
int dy[4]{0,0,1,-1};

int n=7, m=10;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    queue<pair<int,int>> q;
    vis[0][0]=1;
    q.push({0,0});

    while(!q.empty()){
        pair<int,int> cur = q.front();
        q.pop();

        cout<<cur.first<<"\t"<<cur.second<<"\n";
        for(int dir =0;dir<4;dir++){
            int nx = cur.first + dx[dir];
            int ny = cur.second + dy[dir];

            if(nx<0 || nx>=n || ny<0 || ny>=m) continue;
            if(vis[nx][ny] ==1 || board[nx][ny] ==0) continue;
            
            vis[nx][ny]=1;
            q.push({nx,ny});
        }
    }
}