#include <bits/stdc++.h>

using namespace std;
vector<char> cv;

//1 -> 49

int main() {
	
	string st;
	cin >> st;
	for (auto s : st) cv.push_back(s);
	
	sort(cv.begin(), cv.end());
	string str;
	int num = 0;
	for (auto c : cv) {
		if (c <= 57) {
			num += c - '0';
		}
		else {
			str += c;
		}
	}
	str += to_string(num);
	cout << str;
}