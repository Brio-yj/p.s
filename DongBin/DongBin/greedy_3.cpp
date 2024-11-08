#include <bits/stdc++.h>
#define mx 100000

using namespace std;

bool compare(int a, int b) {
	return a > b;
}

int main() {
	int n=0, cnt=0;
	int arr[mx];
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	sort(arr, arr + n, compare);
	int j = 0;
	while(j<n) {
		cout << "j: " <<j<< "\n";
		j += arr[j];
		if (j == n) {
			cnt++;
			break;
		}
		if (j > n) break;
		cnt++;
	}
	cout << cnt;
}