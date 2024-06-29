#include <iostream>
#include <string>
using namespace std;

const int mx = 100000;
int dat[mx];
int pos = 0;

int main() {
    int N;
    cin >> N;

    while (N--) {
        string s;
        cin >> s;
        if (s == "push") {
            int n;
            cin >> n;
            dat[pos++] = n;
        }
        if (s == "pop") {
            if (pos == 0)
                cout << -1 << "\n";
            else
                cout << dat[--pos] << "\n"; // 여기를 수정했습니다. pos를 감소시킨 후 dat[pos]를 출력합니다.
        }
        if (s == "size") {
            cout << pos << "\n"; // 여기에 줄바꿈 문자를 추가했습니다.
        }
        if (s == "empty") {
            if (pos != 0)
                cout << 0 << "\n";
            else
                cout << 1 << "\n";
        }
        if (s == "top") {
            if (pos != 0)
                cout << dat[pos - 1] << "\n"; // 여기에 줄바꿈 문자를 추가했습니다.
            else
                cout << -1 << "\n"; // 여기에 줄바꿈 문자를 추가했습니다.
        }
    }
}
