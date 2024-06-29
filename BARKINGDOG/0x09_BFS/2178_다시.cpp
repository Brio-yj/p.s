#include <algorithm>
#include <iostream>
#include <queue>
#include <string>
#include <utility>

#define X first
#define Y second

using namespace std;

const int mx = 101;
int visit[mx][mx];
int dat[mx][mx];
int dx[]{1, -1, 0, 0};
int dy[]{0, 0, -1, 1};
int n, m, cnt;

void make_board() {
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        for (int j = 0; j < m; j++) {
            dat[i][j]=s[j]-'0';
        }
    }
}
void solve() {
    queue<pair<int, int>> q;
    q.push({0, 0});
    visit[0][0]=1;
    while (!q.empty()) {
        int x = q.front().X;
        int y = q.front().Y;
        q.pop();
        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];
            if (nx < 0 || nx >= n || ny < 0 || ny >= m)
                continue;
            if (visit[nx][ny] || !dat[nx][ny])
                continue;
            visit[nx][ny] = visit[x][y]+1;
            q.push({nx,ny});
        }
    }
}

int main() {
    cin.tie(0);
    make_board();
    solve();
    cout << visit[n-1][m-1];
}


/* 처음 푸쉬하고 visit에 표시하기
    q.push({0, 0});
    visit[0][0]=1;
*/
//실제 배열크기 [n-1][m-1]
/*문자열 숫자로 변환하는법 항상 기억 또 기억
    대문자 -A
    소문자 -a
    숫자 -0
*/
/* define 사용법
    auto cur = q.front();
    int nx = cur.X;
    int ny = cur.Y;
*/

//강의는 visit 배열 대신 visit-1되어있는 dist배열 사용
//gpt는 visit을 계속 1씩 더해서 계산