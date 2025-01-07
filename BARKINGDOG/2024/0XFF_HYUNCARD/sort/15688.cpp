#include <bits/stdc++.h>
#define mx 1000000
using namespace std;
using ll = long long;

ll arr[3*mx];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        arr[num]++;
    }
    for(ll i=-mx;i<mx;i++){
        if(arr[i]==0) continue; 
        for(ll j=0;j<arr[i];j++) cout<<i<<"\n";
    }
}