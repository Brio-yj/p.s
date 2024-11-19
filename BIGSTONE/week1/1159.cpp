#include <bits/stdc++.h>
using namespace std;

vector<string> sv;
int arr[26] = {0}; // 소문자 알파벳 (a-z)의 경우
int n;

int main() {
    cin >> n; // 단어의 개수 입력
    
    for (int i = 0; i < n; i++) {
        string str;
        cin >> str; // 각 단어 입력
        sv.push_back(str);
        
        // 알파벳에서 'a'를 기준으로 인덱스 계산
        if (isalpha(str[0])) { // 만약 첫 문자가 알파벳인 경우
            arr[str[0] - 'a']++;
        }
    }

    bool check = false; // 체크를 위한 변수
    for (int i = 0; i < 26; i++) {
        if (arr[i] >= 5) {
            cout << static_cast<char>('a' + i); // 5개 이상인 알파벳 출력
            check = true; // 알파벳이 출력되었음을 표시
        }
    }

    if (!check) cout << "PREDAJA"; // 아무 알파벳도 출력이 안되면 "PREDAJA" 출력
    return 0;
}