#include <bits/stdc++.h>
#define x first
#define y second

using namespace std;

int board[1001][1001];
int vis[1001][1001];

int dx[4]{1,-1,0,0};
int dy[4]{0,0,1,-1};

queue<pair<int,int>> q;
    
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int m,n;    
    //m-열(x좌표),n-행(y좌표) ->행렬이랑 좌표랑 반대
    //헷갈린게 좌표로 볼건지 행렬로 볼건지 확실하게 정해야 안헷갈릴듯
    cin>>m>>n;
    int max = 1;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>board[i][j];
            if(board[i][j]==1) {
                q.push({i,j});
                vis[i][j]=1;
            }
        }
    }

    while(!q.empty()){
        pair<int,int> cur = q.front();
        q.pop();
        for(int i=0;i<4;i++){
            int nx = cur.x+dx[i];
            int ny = cur.y+dy[i];

            if(nx<0 || nx>=n || ny<0 || ny >=m) {
            //    cout<<"1-out "<<nx<<" "<<ny<<"\n";
                continue;
            }
            if(vis[nx][ny]!=0 || board[nx][ny]==-1 ) {
            //    cout<<"2-out "<<nx<<" "<<ny<<"\n";
                continue;
            }
            //cout<<"in "<<nx<<" "<<ny<<"\n";

            q.push({nx,ny});
            vis[nx][ny]=vis[cur.x][cur.y]+1;
            if(vis[nx][ny]>max) max=vis[nx][ny];
        }
    }
    
    //안익은 토마토 확인
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(vis[i][j]==0 &&board[i][j]==0) {
                max=-1;
                continue;
            }
        }
    }
    if(max==-1) cout<<max;
    else cout<<max-1;

/*
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<board[i][j]<<" ";
        }
        cout<<"\n";
    }
*/
}