#include <bits/stdc++.h>
using namespace std;


int main() {
	int n;
	cin >> n;
	int cnt = 0;
	for (int i = 0; i <= n; i++) {
		for (int j = 0; j <= 59; j++) {
			for (int k = 0; k <= 59; k++) {
				string st = to_string(i) + to_string(j) + to_string(k);
				if (st.find('3') != string::npos) {
					cout << st<<"\n";
					cnt++;
				}
			}
		}
	}
	cout << cnt;
}