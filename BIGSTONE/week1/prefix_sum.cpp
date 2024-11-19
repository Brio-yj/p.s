/*
prefix_sum
psum[1] : ~1까지의 합
psum[2] : ~2까지의 합
배열의 요소가 변하지 않을때 사용
*/

#include <bits/stdc++.h>

using namespace std;

int main(){
    for(int i=1;i<=n;i++){
        cin >> a[i];
        psum[i] = psum[i-1] + a[i];
    }
    cin>>b>>c;
    cout<<psum[c]-psum[b-1];
}
