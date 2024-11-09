#include <iostream>

using namespace std;

int dx[8] = { 2,2,-2,-2,1,1,-1 - 1 };
int dy[8] = { 1,-1,1,-1,2,-2,2,-2 };

int main() {
	string st;
	cin >> st;
	int x = 0, y = 0;
	if (st[0] == 'a') x = 1;
	if (st[0] == 'b') x = 2;
	if (st[0] == 'c') x = 3;
	if (st[0] == 'd') x = 4;
	if (st[0] == 'e') x = 5;
	if (st[0] == 'f') x = 6;
	if (st[0] == 'g') x = 7;
	if (st[0] == 'h') x = 8;
	y = st[1]-'0';

	int cnt = 0;
	
		for (int i = 0; i < 8; i++) {
			int xx = x + dx[i];
			int yy = y + dy[i];
			if (xx >= 1 && xx <= 8 && yy >= 1 && yy <= 8) {
				cnt++;
			}
		}
		cout << cnt;

}