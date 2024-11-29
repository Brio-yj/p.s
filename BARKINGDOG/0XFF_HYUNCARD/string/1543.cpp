#include <bits/stdc++.h>

using namespace std;

string s1, s2;
int cnt = 0;
size_t pos = 0; // size_t 사용

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    getline(cin,s1);
    getline(cin,s2);
    
    while (true) {
        pos = s1.find(s2, pos); // s1에서 s2를 pos부터 찾기
        if (pos != string::npos) { // s2가 s1에서 발견된 경우
            cnt++;
            pos += s2.length(); // 다음 검색을 위해 pos를 업데이트
        } else {
            break; // 더 이상 찾을 수 없으면 루프 종료
        }
    }

    cout << cnt << '\n'; // 결과 출력
    return 0;
}