#include <bits/stdc++.h>

using namespace std;

int main() {
	int x = 1, y = 1;
	char dir[4] = { 'R','L','U','D' };
	int dx[4] = { 1,-1,0,0 };
	int dy[4] = { 0,0,-1,1 };
	
	string input;

	getline(cin, input);
	int xx, yy;
	for (auto s : input) {
		if (s == ' ') continue;
		for (int i = 0; i < 4; i++) {
			if (s == dir[i]) {
				xx = x + dx[i];
				yy = y + dy[i];
			}
			if (xx <= 0 || xx > 100 || yy <= 0 || yy > 100) continue;
			else {
				x = xx;
				y = yy;
			}
		}
	}
	cout << xx << " " << yy;
}