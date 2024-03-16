#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, N, x, cnt;
    cin >> N;
    vector<int> v;
    vector<int> numv;
    

    for (int i = 0; i < N; i++){
        cin >> n;
        v.push_back(n);
        numv[n] = 1;
    }
    cin >> x;
    for (auto a : v)
        if (numv[x - a] == 1) cnt++;
    cout << cnt;
}
