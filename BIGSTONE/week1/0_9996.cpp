#include <bits/stdc++.h>
using namespace std;
/*
    * 찾고 양쪽으로 비교
    처음 문자열보다 크기 작으면 스킵
    aaqwrdsfz*
    * : 빈칸 포함 여러개의 문자로 치환 가능
    같으면  DA, 틀리며 NE
*/
int n;
string str, substr;
vector<string> sv;
int main()
{
    cin >> n >> str;
    auto star = str.find('*');
    // 별찾기
    string fir = str.substr(0, star);
    string sec = str.substr(star + 1);

    for(int i=0;i<n;i++){
        string str2;
        cin>>str2;
        if(fir.size()+sec.size()>str2.size()) cout<<"NE\n";
        else if(fir==str2.substr(0,fir.size()) && sec == str2.substr(str2.size()-sec.size())) cout<<"DA\n";
        else cout<<"NE\n";
    }
}
