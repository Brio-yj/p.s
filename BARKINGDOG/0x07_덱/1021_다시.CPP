#include <deque>
#include <iostream>
#include <string>

using namespace std;

deque<int> dq;
int cnt = 0;
int main() {
    cin.tie(0);
    int N, coin;
    cin >> N >> coin;
    for (int i = 0; i < N; i++) {
        dq.push_back(i + 1);
    }
    while (coin--) {
        int n;
        cin >> n;
        while (n != dq.front()) {
            if (abs(n - dq.front()) < (abs(n - dq.back()) + 1)) {
                cout<<"back ="<<dq.back()<<endl;
                cout<<"front ="<<dq.front()<<endl;
                dq.push_back(dq.front());
                cnt++;
                dq.pop_front();

            } else {
                dq.push_front(dq.back());
                cnt++;
                dq.pop_back();

            }

        }
        dq.pop_front();
    }
    cout << cnt;
}
//find를 사용해서 인덱스를 정수화 하자