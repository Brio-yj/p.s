#include <utility>
#include <queue>

using namespace std;
#define x first;
#define y second;

int board[502][502] ={
    {1,1,1,0,1,0,0,0,0,0},
    {1,0,0,0,1,0,0,0,0,0},
    {1,1,1,0,1,0,0,0,0,0},
    {1,1,0,0,1,0,0,0,0,0},
    {0,1,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0} 
};

bool visit[502][502];
int n=7, m=10;
int dx[4] = {1,-1,0,0};
int dy[4] = {0,0,-1,1};
int main(){
    queue<pair<int,int>> q;
    visit[0][0]=1;
    q.push({0,0});
    while(!q.empty()){
        pair <int,int> cur = q.front(); q.pop();
        int nx = cur.x;
        int ny = cur.y;
        for (int i=0;i<4;i++){
            nx =+dx[i];
            ny =+dy[i];
            if(nx<0 || nx>n || ny<0 || ny>m) continue;
            else if(visit[nx][ny]==1 ||board[nx][ny]==0)continue;
            else {
                visit[nx][ny]==1;
                q.push({nx,ny});    
            }
        }
    }
}




