#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    vector<int> v{2,2,2,6,6,6,4,4,1,3,5,7,7,4,2};
    sort(v.begin(),v.end());
    v.erase(unique(v.begin(),v.end()),v.end());
}
/*
    항상 sort를 하고 써야한다
    unique를 하고 나면 끝난 다음의 위치(iterator)를 리턴한다
*/