#include <bits/stdc++.h>

using namespace std;

//n->1
int cnt;
int main() {
	int n, k;
	cin >> n >> k;
	while (n % k != 0) {
		n--;
		cnt++;
	}
	while (n != 1) {
		n = n / k;
		cnt++;
	}
	cout << cnt;
}