#include <bits/stdc++.h>

using namespace std;

int main() {
	string s;
	int num = 0;
	cin >> s;
	for (auto a : s) {
		if (a == '0')  num += 0;
		if (a!= '0' && num!=0) num *= a-'0';
		if (a != '0' && num == 0) num += a-'0';
		cout << "a: " << a << "num: " << num << "\n";
	}
	cout << num;
}