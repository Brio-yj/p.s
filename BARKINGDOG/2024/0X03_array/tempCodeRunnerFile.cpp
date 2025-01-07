#include <bits/stdc++.h>
using namespace std;
int main(){
    string a;
    cin>>a;
    int cnt=0;
    int ccnt=0;
    for(auto s : a){
        if(s-'0'==6 || s-'0'==9){
            ccnt++;
            if(ccnt==2){
                cnt++;
                ccnt=0;
            } 
        }
        else cnt++;
    }
    cout<<cnt;
}

/*
|| && 이런거 쓸때 양쪽에 다 조건 걸어줘야 한다
*/