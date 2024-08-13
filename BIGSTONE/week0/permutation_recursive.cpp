#include <iostream>
using namespace std;
int a[3]={1,2,3};
int n=3, r=3;
void print(int r){
    for(int i=0;i<r;i++){
        cout<<a[i]<<" ";
    }
    cout<<"\n";
}

int perm(int r, int depth){
    if(r==depth){
        print(r);
        return;
    }
    for(int i=depth;i<n;i++){
        swap(a[i],a[depth]);
        perm(r,depth+1);
        swap(a[i],a[depth]);
    }
}
int main(){
    perm(r,0);
}

// 재귀에서 제일중요한건 처음부터 끝까지 다 생각하는게 아니라
// n에서 n+1로 가는거만 생각해서 로직 구성하자
// 그리고 재귀 탈출하는 조건
// 이렇게 총2개의 로직으로 생각하자