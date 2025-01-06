#include<vector>
#include<utility>

using namespace std;

int board[502][502];
int vis[502][502];
int dx[4]{1,-1,0,0};
int dy[4]{0,0,1,-1};
int n=7,m=8;
void dfs(int x, int y){
    vis[x][y]=1;
    for(int i=0;i<4;i++){
        int nx = x+dx[i];
        int ny = y+dy[i];

        if(x<0 || x>=n || y<0 || y>=m)  continue;
        if(vis[x][y]==1 || board[x][y]!=1) continue;

        dfs(x,y);
    }
}
int main(){

}