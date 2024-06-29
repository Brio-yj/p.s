#include <bits/stdc++.h>
using namespace std;
int cntarr[10];
int main() {
    string a;
    cin >> a;
    for (auto s : a) {
        cntarr[s - '0']++;
    }
    for(auto c : cntarr) cout<<c<<" ";
    cout<<endl;
    if(cntarr[6]%2==0) cntarr[6] /=2;
    if(cntarr[6]%2==1) ++cntarr[6] /=2;
    if(cntarr[9]%2==0) cntarr[9] /=2;
    if(cntarr[9]%2==1) ++cntarr[9] /=2;
    int res=cntarr[0];
    for(int i =0 ;i<10;i++){
        if(res<=cntarr[i]) res=cntarr[i];
    }
    cout<<res;
}

/*
|| && 이런거 쓸때 양쪽에 다 조건 걸어줘야 한다
*/