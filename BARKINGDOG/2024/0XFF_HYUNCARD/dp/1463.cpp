#include <bits/stdc++.h>

using namespace std;
int v[1000002];
int n;

int main(){
    cin>>n;

    v[2]=1;
    v[3]=1;
    for(int i=4;i<=n;i++){
        if     (i%2==0 && i%3==0) v[i] = min(v[i-1],v[i/2],v[i/3])+1;
        else if(i%2!=0 && i%3==0) v[i] = min(v[i-1],v[i/3])+1;
        else if(i%2==0 && i%3!=0) v[i] = min(v[i-1],v[i/2])+1;
        else                      v[i] = v[i-1]+1;
    }
}
/*
    /3,/2/-1
*/