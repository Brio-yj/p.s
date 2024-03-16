#include <bits/stdc++.h>
using namespace std;
    int arr[26];
int main() {
    string s;
    cin>>s;
    for (auto c : s) {
        arr[c - 'a']++;
    }
    for (auto a : arr) cout<<a<<" ";
}

/*
알파벳 계산할때는 아스키코드 사용해서 소문자 -a하고 0부터 시작하는 배열과 동일하게 만들기
배열을 초기화 할때 지역변수에서 하면 쓰레기값 담기는데 전역으로 하면 괜찮다
*/