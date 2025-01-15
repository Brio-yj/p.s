#include <iostream>
#include <queue>
#include <string>
#include <utility>

#define X first
#define Y second
using namespace std;

queue<pair<int, int>> q_J;
queue<pair<int, int>> q_F;
int const mx = 1002;
int dat[mx][mx];
// 벽 받으면 그걸  0 으로 취급하자
int vis_J[mx][mx];
int vis_F[mx][mx];
int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, 1, -1};

int n, m;

void make_board() {
    cin.tie(0);
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            char ch;
            cin >> ch;
            if (ch == '#') dat[i][j] = 0;
            if (ch == 'J') {
                dat[i][j] = 1;
                vis_J[i][j]=1;
                q_J.push({i, j});
            }
            if (ch == 'F') {
                dat[i][j] = 1;
                vis_F[i][j]=1;
                q_F.push({i, j});
            }
            if (ch == '.') {
                dat[i][j] = 1;
            }
        }
    }
}
void cal_J(){
    while(!q_J.empty()){
        auto cur = q_J.front();
        int x = cur.X;
        int y = cur.Y;
        q_J.pop();
        
    }
}
int main() {
    make_board();
    cal_J();
}

// 상하좌우 중에 NULL이 존재하는 점의 길이가 가장 작은점끼리비교
// dat찍을때 바로 visit찍으면 된다
// J가 더 작으면 성공 F가 더 작으면 실패