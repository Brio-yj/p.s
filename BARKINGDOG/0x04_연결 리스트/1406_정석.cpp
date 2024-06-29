#include <iostream>
#include <list>
#include <string>

using namespace std;

list<char> li;
auto it = li.begin();
int main() {
    string s;
    cin >> s;
    for (auto ch : s) li.push_back(ch);
    int N;
    cin >> N;
    while (N--) {
        char ch;
        cin >> ch;
        if (ch == 'L') {
            if (it != li.begin()) it--;
        }
        if (ch == 'D') {
            if (it != li.end()) it++;
        }
        if (ch == 'B') {
            if (it != li.begin()) {
                it--;
                it = li.erase(it);
            }
        }
        if (ch == 'P') {
            char ch2;
            cin >> ch2;
            li.insert(it, ch2);
        }
    }
    for (auto list : li) cout << list;
}

// push_fornt,back,insert,erase
// 리스트를 삭제하고 it = li.erase(it) 이런식으로
// 다시 받아 줘야 한다