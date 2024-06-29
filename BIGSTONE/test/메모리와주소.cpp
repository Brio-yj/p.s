#include<bits/stdc++.h>
using namespace std;
vector<pair<int, int>> v;
bool cmp(pair<int, int> a, pair<int, int> b) {
	for (auto it : v) cout << it.first << ":" << it.second <<" -- ";
	cout << endl << endl;
	return a.first > b.first;
}
int main() {
	for (int i = 10; i >= 1; i--) {
		v.push_back({ 10 - i,i  });
	}
	sort(v.begin(), v.end(), cmp);
	for (auto it : v) cout << it.first << " : " << it.second << "\n";
	return 0;
}