#include <bits/stdc++.h>
using namespace std;

vector<string> sv;
int cnt;

void solve(string s)
{
    stack<char> ss;
    char cur = 0;
    for(int i=0;i<s.size();i++){
        if(ss.empty()) cur =0;
        else cur = ss.top();

        if(s[i]==cur)
        {
            ss.pop();
        }else
        {
            ss.push(s[i]);
        }
    }
    if(ss.empty()) 
    {
        cnt++;
    }
}

int main()
{
    int n;
    cin>>n;
    
    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        solve(s);
    }
    cout<<cnt;   
}

/*
    문자열 문제 풀이 방법
    1. 90도 회전
    2. 뒤집기
    3. 예시를 하나 더 붙여보기

    큐나 스택같은 자료구조를 사용할때는 항상 사이즈가 0인지 아닌지 먼저 확인해야한다

    문제에서 짝짓기 or 폭발 -> 스택을 생각해야 한다
*/