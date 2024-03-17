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
                cout << dat[pos--] << "\n";
        }
        if (s == "size") {
            cout << pos;
        }
        if (s == "empty") {
            if (pos != 0)
                cout << 1 << "\n";
            else
                cout << 0 << "\n";
        }
        if (s == "top") {
            if (pos != 0)
                cout << dat[pos - 1];
            else
                cout << -1;
        }
    }
}