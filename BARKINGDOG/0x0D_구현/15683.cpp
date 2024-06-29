#include <algorithm>
#include <iomanip>
#include <iostream>
#include <string>
#include <vector>
struct Point {
    int num;
    int x;
    int y;
};

using namespace std;
vector<vector<int>> v;
vector<Point> stv;
int n, m;

bool comp(Point a, Point b) { return a.num > b.num; }

void find_zero(int x, int y, int arr[4]) {
    // 좌
    for (int i = y; i > -1; i--)
        if (v[x][i] == 0) arr[0] += 1;
    // 우
    for (int i = y; i < m; i++)
        if (v[x][i] == 0) arr[1] += 1;
    // 상
    for (int i = x; i > -1; i--)
        if (v[i][y] == 0) arr[2] += 1;
    // 하
    for (int i = x; i < n; i++)
        if (v[i][y] == 0) arr[3] += 1;
}
void solve(int x, int y, int dir) {
    // 좌
    if (dir == 0)
        for (int i = y; i > -1; i--)
            if (v[x][i] == 0) v[x][i] = -1;
    // 우
    if (dir == 1)
        for (int i = y; i < m; i++)
            if (v[x][i] == 0) v[x][i] = -1;
    // 상
    if (dir == 2)
        for (int i = x; i > -1; i--)
            if (v[i][y] == 0) v[i][y] = -1;
    // 하
    if (dir == 3)
        for (int i = x; i < n; i++) {
            if (v[i][y] == 0) v[i][y] = -1;
        }
}
void printv() {
    for (auto a : v) {
        for (auto b : a) {
            cout << setw(6) << b << " ";
        }
        cout << endl;
    }
    cout<<endl<<endl;
}
int main() {
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        vector<int> vv;
        for (int j = 0; j < m; j++) {
            int num;
            cin >> num;
            if (num != 0) {
                Point p;
                p = {num, i, j};
                stv.push_back(p);
            }
            vv.push_back(num);
        }
        v.push_back(vv);
    }
    sort(stv.begin(), stv.end(), comp);
    for (auto a : stv) {
        if (a.num == 5) {
            for (int i = 0; i < 4; i++) {
                solve(a.x,a.y,i);
            }
            cout << "num=5 \n";
            printv();
        } else if (a.num == 4) {
            int zero_cnt[4]{0};
            find_zero(a.x, a.y, zero_cnt);
            int idx = 0;
            // 제일 작은거 개수 작은거 찾고
            for (int i = 0; i < 4; i++) {
                if (zero_cnt[idx] > zero_cnt[i]) idx = i;
            }
            for (int i = 0; i < 4; i++) {
                if (i == idx) continue;
                solve(a.x, a.y, i);
            }
            cout << "num=4 \n";
            printv();
        } else if (a.num == 3) {
            int zero_cnt[4]{0};
            find_zero(a.x, a.y, zero_cnt);
            int arr[4];
            arr[0] = zero_cnt[0] + zero_cnt[2]; 
            arr[1] = zero_cnt[0] + zero_cnt[3];
            arr[2] = zero_cnt[1] + zero_cnt[2];
            arr[3] = zero_cnt[1] + zero_cnt[3];
            // 제일 0 많은데 찾기
            int idx = 0;
            for (int i = 0; i < 4; i++) {
                if (arr[idx] < arr[i]) idx = i;
            }
            //-1변환
            int aa,bb;
            if(idx==0) aa=0,bb=2;
            if(idx==1) aa=0,bb=3;
            if(idx==2) aa=1,bb=2;
            if(idx==3) aa=1,bb=3;
            solve(a.x, a.y, aa);
            solve(a.x, a.y, bb);
            cout << "num=3 \n";
            printv();
        } else if (a.num == 2) {
            int zero_cnt[4]{0};
            find_zero(a.x, a.y, zero_cnt);
            int arr[4];
            arr[0] = zero_cnt[0] + zero_cnt[1];
            arr[1] = zero_cnt[2] + zero_cnt[3];
            // 제일 0 많은데 찾기
            int idx;
            if (arr[0] > arr[1])
                idx = 0;
            else
                idx = 1;
            //-1변환
            solve(a.x, a.y, idx);
            solve(a.x, a.y, idx + 1);
            cout << "num=2 \n";
            printv();
        } else if (a.num == 1) {
            int zero_cnt[4]{0};
            find_zero(a.x, a.y, zero_cnt);
            int idx = 0;
            // 제일 많은거 찾고
            for (int i = 0; i < 4; i++) {
                if (zero_cnt[idx] < zero_cnt[i]) idx = i;
            }
            solve(a.x, a.y, idx);
            cout << "num=1 \n";
            printv();
        }
    }

    int cnt = 0;
    for (auto a : v){
        for(auto b : a){
            if(b==0) cnt++;
        }
    }
    cout<<cnt;
    
}
/*
1. 5일때는 0인거 전부 -1으로 변경
2. 나머지일때는 상하좌우 0인거 개수 확인하고 sort
3. 0인개수 가장 많은 방향 0->-1로 변경
*/