#include <bits/stdc++.h>
using namespace std;

int numarr[10];
int main() {
    int n = 3, res = 1;
    int a;
    while (n--) {
        cin >> a;
        res *= a;
    }
    string r = to_string(res);
    for (int i = 0; i < r.size(); i++) {
        numarr[r[i] - '0']++;
    }
    for (int i = 0; i < 10; i++) {
        cout << numarr[i] << "\n";
    }
}

/*
int -> String : to_string
string도 인덱스로 접근 가능하다
소문자는 -a
대문자는 -A
숫자는 -0
을 사용하면 문자열을 숫자로 변경할 수 있다
나머지를 이용해서 한번 풀어보기
*/

/*
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int A, B, C;
    cin >> A >> B >> C;
    int t=A*B*C;
    int d[10] = {};
    // 계산 결과를 자릿수별로 확인하여 저장
    while (t>0) {
        d[t%10]++;
        t/=10;
    }  
for (int i=0; i<10; ++i) cout << d[i] << '\n';
}*/