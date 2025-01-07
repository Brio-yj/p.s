#include <iostream>
#include <stack>
#include <string>

using namespace std;
stack<int> st;
int main() {
    int N;
    cin >> N;
    while (N--) {
        string s;
        cin >> s;
        if (s == "push") {
            int n;
            cin >> n;
            st.push(n);
        }
        if (s == "pop") {
            if (st.empty())
                cout << "-1\n";  // 스택이 비었을 때 -1 출력
            else {
                cout << st.top() << "\n";  // 스택의 맨 위 원소 출력
                st.pop();                  // 원소 제거
            }
        }

        if (s == "size") {
            cout << st.size() << "\n";
        }
        if (s == "empty") {
            if (st.empty())
                cout << "1 \n";
            else
                cout << "0 \n";
        }
        if (s == "top") {
            if (st.empty())
                cout << "-1 \n";
            else
                cout << st.top() << "\n";
        }
    }
}