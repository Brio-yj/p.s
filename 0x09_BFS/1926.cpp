#include <algorithm>
#include <iostream>
#include <queue>
#include <utility>

using namespace std;

const int mx = 500;

vector<int> sumv;
int dat[mx][mx];
int visit[mx][mx];
int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, -1, 1};
int n, m, cnt, sum;

void make_board() {
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int val;
            cin >> val;
            dat[i][j] = val;
        }
    }
}
void solve(int startx, int starty) {
    queue<pair<int, int>> q;
    q.push({startx, starty});
    visit[startx][starty] = 1;
    sum = 1;
    while (!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];
            if (nx < 0 || nx >= n || ny < 0 || ny >= m)
                continue;
            else if (visit[nx][ny] || dat[nx][ny] == 0)
                continue;
            visit[nx][ny] = 1;
            q.push({nx, ny});
            sum++;
        }
    }
    sumv.push_back(sum);
    sum = 0;
}
void find_start() {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (!visit[i][j] && dat[i][j]) {
                solve(i, j);
                cnt++;
            }
        }
    }
}
int main() {
    cin.tie(0);
    make_board();
    find_start();
    cout << cnt << "\n";
    if (sumv.empty())
        cout << 0;
    else {
        sort(sumv.rbegin(), sumv.rend());
        cout << sumv[0];
    }
}

//벡터 정렬 하는법
//sort(v.begin(),v.end())
//srot(v.rbegin(),v.rend())

/*  시작좌표 방문 찍어주기
    queue<pair<int, int>> q;
    q.push({startx, starty});
    visit[startx][starty] = 1;
*/


/* x,y 설정 -> 중심좌표는 움직이면 안된다
    while (!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];

*/

/*  범위 조심
    if (nx < 0 || nx >= n || ny < 0 || ny >= m)
*/