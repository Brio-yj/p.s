#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;
    
    map<char, int, greater<char>> mmap;
    //map에서 내림차순으로 정렬할려면 처음부터 그렇게 선언해야한다

    for (int i = 0; i < str.size(); i++)
    {
        mmap[str[i]]++;
    }
    int cnt = 0;
    for (const auto &entry : mmap)
        if (entry.second % 2 != 0)
            cnt++;
    if (cnt >= 2)
    {
        cout << "I'm Sorry Hansoo";
        exit(0);
    }
    // 입력 + 쏘리

    string result;
    char mid;
    for(auto &entry : mmap){
        //홀수개는 1개빼서 양쪽으로 대입하기
            entry.second--;
            entry.second++;
        int cnt=entry.second;
        if(entry.second%2==1) {
            cnt--;
            mid = entry.first;
            }
        for(int j=0;j<cnt/2;j++){
            result =  entry.first+result;
            result += entry.first;
        }
    }
    if(mid) result.insert(result.begin()+result.size()/2,mid);
    cout<<result;
}

