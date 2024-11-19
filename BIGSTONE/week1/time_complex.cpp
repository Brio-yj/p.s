#include <bits/stdc++.h>

using namespace std;

int n, a[1004],cnt;
int go(int l, int r){
    //cnt++                  --------> 시간복잡도 모르겠으면 이렇게 직접 카운트 확인해보자
    if(l==r) return a[l];
    int mid = (l+r)/2;
    int sum = go(l,mid) + go(mid+1,r);
    return sum;
}
int main(){
    cin>>n;
    for(int i=1;i<=n;i++){
        a[i-1]=i;
    }
    int sum = go(0,n-1);
    cout<< sum<<"\n";
}

/*
    시간복잡도 계산은
    1. 어림잡아 직접 계산하기
    2. 점화식 사용
    3. 보통 재귀에서 시간복잡도는 함수 호출 횟수의 n승
*/